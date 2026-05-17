#ifndef UTILS_H
#define UTILS_H
#include <Arduino.h>
#include <ctype.h>

#ifdef M5STICKC_PLUS2
  #define IR_PIN      19
  #define BUTTON_PIN  37
  #define LED_PIN     19
#else
  #define IR_PIN      3
  #define BUTTON_PIN  9
  #define LED_PIN     8
#endif

struct BrandTarget {
    const char* funcName;
    void (*sendFunc)();
};

#define REGISTER_TARGET(func) { #func, func }

inline void printBrandName(const char* funcName) {
  const char* name = funcName;
  if (strncmp(name, "send", 4) == 0) name += 4;
  for (int i = 0; name[i] != '\0'; i++) {
    if (i > 0) {
      if (islower(name[i-1]) && isupper(name[i])) {
        Serial.print(' ');
      } else if (isupper(name[i-1]) && isupper(name[i]) && islower(name[i+1])) {
        Serial.print(' ');
      }
    }
    Serial.print(name[i]);
  }
}

inline bool isInterrupted() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50); // Debounce
    if (digitalRead(BUTTON_PIN) == LOW) {
      return true;
    }
  }
  return false;
}

inline bool safeDelay(int ms) {
  unsigned long start = millis();
  while (millis() - start < ms) {
    if (isInterrupted()) return true;
    delay(1);
  }
  return false;
}

inline bool sendAllFromList(const BrandTarget list[], int count, const char* categoryMsg) {
  Serial.println(categoryMsg);
  for (int i = 0; i < count; i++) {
    Serial.print(F("["));
    Serial.print(i + 1);
    Serial.print(F("/"));
    Serial.print(count);
    Serial.print(F("] "));
    printBrandName(list[i].funcName);
    Serial.println();

    list[i].sendFunc();

    if (safeDelay(80)) {
      Serial.println(F(">>> Interrupted by user!"));
      return true;
    }
  }
  return false;
}

#endif
