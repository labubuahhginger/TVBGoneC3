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
  delay(100);

  unsigned long start = millis();

  if (sendAllTVs()) return;
  if (sendAllProjectors()) return;
  if (sendAllSmartBoards()) return;

  float elapsed = (millis() - start) / 1000.0;

  Serial.print(F("Skiddy done it's job in "));
  Serial.print(elapsed, 1);
  Serial.println(F(" seconds. Press BOOT to restart SkidBGone."));
}

void setup() {
  Serial.begin(115200);
  // Wait for Serial to initialize (ESP32-C3 USB-CDC)
  unsigned long serialWait = millis();
  while (!Serial && millis() - serialWait < 2000);

  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

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
}

void loop() {
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
}
