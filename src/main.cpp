#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#include "tvs.h"
#include "projectors.h"
#include "smartboards.h"

#define IR_PIN      3
#define BUTTON_PIN  9
#define LED_PIN     8

IRsend irsend(IR_PIN);


// skiddy's job job sahur
void sendAll() {
  Serial.println("SkidBGone is the best TvBGone firmware bro. Starting..."); delay(50);

  unsigned long start = millis();

  sendAllTVs();
  sendAllProjectors();
  sendAllSmartBoards();

  float elapsed = (millis() - start) / 1000.0;


  Serial.print("Skiddy done it's job in ");
  Serial.print(elapsed, 1);
  Serial.println(" seconds. Press BOOT to restart SkidBGone.");
}

void setup() {
  Serial.begin(115200);
  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

  Serial.println("");
  Serial.println("   _____ __   _     ______  ______               ");
  Serial.println("  / ___// /__(_)___/ / __ )/ ____/___  ____  ___ ");
  Serial.println("  \\__ \\/ //_/ / __  / __  / / __/ __ \\/ __ \\/ _ \\");
  Serial.println(" ___/ / ,< / / /_/ / /_/ / /_/ / /_/ / / / /  __/");
  Serial.println("/____/_/|_/_/\\__,_/_____/\\____/\\____/_/ /_/\\___/ ");
  Serial.println("");
  Serial.println("        ( o  o )  < Skiddy can't wait to turn off everything. >");
  Serial.println("         (  v  )");
  Serial.println("        /|     |\\");
  Serial.println("        _|_____|_");
  Serial.println("");
  Serial.println("  Skid are you ready? Yeah im ready bradar. Press BOOT to start.");
  Serial.println("");
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50);
    if (digitalRead(BUTTON_PIN) == LOW) {
      digitalWrite(LED_PIN, LOW);
      sendAll();
      digitalWrite(LED_PIN, HIGH);
      while (digitalRead(BUTTON_PIN) == LOW);
    }
  }
}