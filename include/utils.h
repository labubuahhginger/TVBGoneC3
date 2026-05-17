#ifndef UTILS_H
#define UTILS_H
#include <Arduino.h>
#include <ctype.h>

#ifdef M5STICKC_PLUS2
  #include <M5Unified.h>
  extern uint8_t selectedIrPin;
  const uint8_t selectablePins[] = {19, 0, 26, 36, 25, 32, 33};
  const char* const pinNames[] = {"Internal (G19)", "Header (G0)", "Header (G26)", "Header (G36)", "Header (G25)", "Grove (G32)", "Grove (G33)"};
  const int numPins = 7;

  #define IR_PIN      selectedIrPin
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

inline void printBrandName(const char* funcName, bool toDisplay = false) {
  const char* name = funcName;
  if (strncmp(name, "send", 4) == 0) name += 4;
  for (int i = 0; name[i] != '\0'; i++) {
    char c = name[i];
    if (i > 0) {
      bool spaceNeeded = false;
      if (islower(name[i-1]) && isupper(name[i])) {
        spaceNeeded = true;
      } else if (isupper(name[i-1]) && isupper(name[i]) && islower(name[i+1])) {
        spaceNeeded = true;
      }

      if (spaceNeeded) {
        Serial.print(' ');
#ifdef M5STICKC_PLUS2
        if (toDisplay) M5.Display.print(' ');
#endif
      }
    }
    Serial.print(c);
#ifdef M5STICKC_PLUS2
    if (toDisplay) M5.Display.print(c);
#endif
  }
}

inline bool isInterrupted() {
#ifdef M5STICKC_PLUS2
  M5.update();
  if (M5.BtnA.wasPressed()) return true;
#endif
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
#ifdef M5STICKC_PLUS2
  M5.Display.clear();
  M5.Display.setCursor(0, 0);
  M5.Display.setTextColor(YELLOW);
  M5.Display.println(categoryMsg);
  M5.Display.setTextColor(WHITE);
#endif

  for (int i = 0; i < count; i++) {
    Serial.print(F("["));
    Serial.print(i + 1);
    Serial.print(F("/"));
    Serial.print(count);
    Serial.print(F("] "));

#ifdef M5STICKC_PLUS2
    M5.Display.printf("[%d/%d] ", i + 1, count);
#endif

    printBrandName(list[i].funcName, true);
    Serial.println();
#ifdef M5STICKC_PLUS2
    M5.Display.println();
    if (M5.Display.getCursorY() > M5.Display.height() - 20) {
        M5.Display.clear();
        M5.Display.setCursor(0, 0);
        M5.Display.setTextColor(YELLOW);
        M5.Display.println(categoryMsg);
        M5.Display.setTextColor(WHITE);
    }
#endif

    list[i].sendFunc();

    if (safeDelay(80)) {
      Serial.println(F(">>> Interrupted by user!"));
#ifdef M5STICKC_PLUS2
      M5.Display.setTextColor(RED);
      M5.Display.println(F("\nINTERRUPTED!"));
#endif
      return true;
    }
  }
  return false;
}

#endif
