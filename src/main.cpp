#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#include "utils.h"
#include "tvs.h"
#include "projectors.h"
#include "smartboards.h"

IRsend irsend(IR_PIN);

// skiddy's job job sahur
void sendAll() {
  Serial.println(F("SkidBGone is the best TvBGone firmware bro. Starting..."));
#ifdef M5STICKC_PLUS2
  M5.Display.clear();
  M5.Display.setCursor(0, 0);
  M5.Display.setTextColor(GREEN);
  M5.Display.println(F("Skiddy is working..."));
  M5.Display.setTextColor(WHITE);
#endif
  delay(100);

  unsigned long start = millis();

  if (sendAllTVs()) return;
  if (sendAllProjectors()) return;
  if (sendAllSmartBoards()) return;

  float elapsed = (millis() - start) / 1000.0;

  Serial.print(F("Skiddy done it's job in "));
  Serial.print(elapsed, 1);
  Serial.println(F(" seconds. Press BOOT to restart SkidBGone."));

#ifdef M5STICKC_PLUS2
  M5.Display.clear();
  M5.Display.setCursor(0, 0);
  M5.Display.setTextColor(CYAN);
  M5.Display.println(F("Skiddy done it's job!"));
  M5.Display.printf("Time: %.1fs\n", elapsed);
  M5.Display.println(F("\nPress Button A\nto restart."));
#endif
}

void setup() {
#ifdef M5STICKC_PLUS2
  auto cfg = M5.config();
  M5.begin(cfg);
  M5.Display.setRotation(1);
  M5.Display.setTextSize(1.5);
#endif

  Serial.begin(115200);
  // Wait for Serial to initialize (ESP32-C3 USB-CDC)
  unsigned long serialWait = millis();
  while (!Serial && millis() - serialWait < 2000);

  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
#ifdef M5STICKC_PLUS2
  digitalWrite(LED_PIN, LOW); // M5 IR LED is Active-High
#else
  digitalWrite(LED_PIN, HIGH); // Generic LED is usually Active-Low
#endif

  Serial.println(F(""));
  Serial.println(F("   _____ __   _     ______  ______               "));
  Serial.println(F("  / ___// /__(_)___/ / __ )/ ____/___  ____  ___ "));
  Serial.println(F("  \\__ \\/ //_/ / __  / __  / / __/ __ \\/ __ \\/ _ \\"));
  Serial.println(F(" ___/ / ,< / / /_/ / /_/ / /_/ / /_/ / / / /  __/"));
  Serial.println(F("/____/_/|_/_/\\__,_/_____/\\____/\\____/_/ /_/\\___/ "));
  Serial.println(F(""));
  Serial.println(F("        ( o  o )  < Skiddy can't wait to turn off everything. >"));
  Serial.println(F("         (  v  )"));
  Serial.println(F("        /|     |\\"));
  Serial.println(F("        _|_____|_"));
  Serial.println(F(""));
  Serial.println(F("  Skid are you ready? Yeah im ready bradar. Press BOOT to start."));
  Serial.println(F(""));

#ifdef M5STICKC_PLUS2
  M5.Display.setTextColor(WHITE);
  M5.Display.println(F("SkidBGone v1.0"));
  M5.Display.println(F("Ready to blast."));
  M5.Display.println(F("\nPress Button A\nto start."));
#endif
}

void loop() {
#ifdef M5STICKC_PLUS2
  M5.update();
  if (M5.BtnA.wasPressed()) {
      digitalWrite(LED_PIN, HIGH);
      sendAll();
      digitalWrite(LED_PIN, LOW);
  }
#else
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50);
    if (digitalRead(BUTTON_PIN) == LOW) {
      // Wait for button release before starting
      while (digitalRead(BUTTON_PIN) == LOW);
      delay(100);

      digitalWrite(LED_PIN, LOW);
      sendAll();
      digitalWrite(LED_PIN, HIGH);

      // Additional debounce after finishing
      delay(100);
    }
  }
#endif
}
