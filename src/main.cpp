#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_PIN 3
#define BUTTON_PIN 9
#define LED_PIN 8

IRsend irsend(IR_PIN);

// Samsung
void sendSamsung() {
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  // Samsung Series 6+
  irsend.sendSAMSUNG(0xE0E019E6); delay(50);
  // Samsung старые модели
  irsend.sendSAMSUNG(0xE0E0F00F); delay(50);
}

// LG
void sendLG() {
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  // LG старые модели
  irsend.sendNEC(0x20DFF807, 32); delay(50);
  // LG OLED
  irsend.sendNEC(0x20DF40BF, 32); delay(50);
}

// Sony
void sendSony() {
  // SIRC 12-bit
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0xA8C, 12); delay(30);
  }
  // SIRC 15-bit
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0xA8C, 15); delay(30);
  }
  // SIRC 20-bit
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x740C, 20); delay(30);
  }
  // Sony Bravia
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x290C, 15); delay(30);
  }
}

// Philips
void sendPhilips() {
  // RC5
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  // RC6
  irsend.sendRC6(0x800F040C, 32); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
}

// Panasonic
void sendPanasonic() {
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  // Panasonic Viera
  irsend.sendPanasonic(0x4004, 0x1000E0E); delay(100);
}

// Sharp
void sendSharp() {
  irsend.sendSharpRaw(0x800F, 15); delay(100);
  irsend.sendSharpRaw(0x800F, 15); delay(100);
  // Sharp Aquos
  irsend.sendSharpRaw(0xA800F, 15); delay(100);
}

// Toshiba
void sendToshiba() {
  // NEC protocol
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FDB847, 32); delay(100);
}

// Hitachi
void sendHitachi() {
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
}

// Haier
void sendHaier() {
  irsend.sendNEC(0x40800000, 32); delay(100);
  irsend.sendNEC(0x40800000, 32); delay(100);
}

// TCL / Thomson 
void sendTCL() {
  // RC5
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  // NEC
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
}

// Hisense
void sendHisense() {
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF00FF, 32); delay(100);
}

// Vizio
void sendVizio() {
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
}

// JVC
void sendJVC() {
  irsend.sendJVC(0xC5E8, 16, false); delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
}

// Mitsubishi
void sendMitsubishi() {
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
}

// Grundig
void sendGrundig() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0xC, 20); delay(100);
}

// Vestel
void sendVestel() {
  irsend.sendNEC(0x57E300FF, 32); delay(100);
  irsend.sendNEC(0x57E300FF, 32); delay(100);
}

// Beko / Arcelik
void sendBeko() {
  irsend.sendNEC(0xE0E040BF, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
}

// IR коды проэкторов

// BenQ
void sendBenQ() {
  irsend.sendNEC(0xD5200000, 32); delay(100);
  irsend.sendNEC(0xD5208877, 32); delay(100);
  irsend.sendNEC(0xD520F00F, 32); delay(100);
}

// Epson
void sendEpson() {
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  // Epson старые
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
}

// Optoma
void sendOptoma() {
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43807F, 32); delay(100);
}

// ViewSonic
void sendViewSonic() {
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877A25D, 32); delay(100);
}

// Acer
void sendAcer() {
  irsend.sendNEC(0xEF10629D, 32); delay(100);
  irsend.sendNEC(0xEF10629D, 32); delay(100);
  irsend.sendNEC(0xEF10C03F, 32); delay(100);
}

// Infocus
void sendInfocus() {
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
}

// NEC Display / NEC Projectors
void sendNECDisplay() {
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
}

// Panasonic Projector
void sendPanasonicProjector() {
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
}

// Sony Projector (VPL)
void sendSonyProjector() {
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x290C, 15); delay(30);
  }
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0xA90, 15); delay(30);
  }
}

// Casio
void sendCasio() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
}

// sendAll отправляет все "пакеты"

void sendAll() {
  Serial.println("Tv-B-Gone started. Turning off TVs.");

  // --- Телевизоры ---
  Serial.println("[1/14] Samsung");
  sendSamsung(); delay(300);

  Serial.println("[2/14] LG");
  sendLG(); delay(300);

  Serial.println("[3/14] Sony TV");
  sendSony(); delay(300);

  Serial.println("[4/14] Philips");
  sendPhilips(); delay(300);

  Serial.println("[5/14] Panasonic");
  sendPanasonic(); delay(300);

  Serial.println("[6/14] Sharp");
  sendSharp(); delay(300);

  Serial.println("[7/14] Toshiba");
  sendToshiba(); delay(300);

  Serial.println("[8/14] Hitachi");
  sendHitachi(); delay(300);

  Serial.println("[9/14] Hisense");
  sendHisense(); delay(300);

  Serial.println("[10/14] JVC");
  sendJVC(); delay(300);

  Serial.println("[11/14] Mitsubishi");
  sendMitsubishi(); delay(300);

  Serial.println("[12/14] TCL");
  sendTCL(); delay(300);

  Serial.println("[13/14] Vizio");
  sendVizio(); delay(300);

  Serial.println("[14/14] Vestel/Beko");
  sendVestel(); delay(200);
  sendBeko(); delay(300);

  Serial.println("Now turning off projectors.");

  Serial.println("[P1/9] BenQ Projector");
  sendBenQ(); delay(300);

  Serial.println("[P2/9] Epson Projector");
  sendEpson(); delay(300);

  Serial.println("[P3/9] Optoma Projector");
  sendOptoma(); delay(300);

  Serial.println("[P4/9] ViewSonic Projector");
  sendViewSonic(); delay(300);

  Serial.println("[P5/9] Acer Projector");
  sendAcer(); delay(300);

  Serial.println("[P6/9] Infocus Projector");
  sendInfocus(); delay(300);

  Serial.println("[P7/9] NEC Projector");
  sendNECDisplay(); delay(300);

  Serial.println("[P8/9] Panasonic Projector");
  sendPanasonicProjector(); delay(300);

  Serial.println("[P9/9] Sony Projector / Casio");
  sendSonyProjector(); delay(200);
  sendCasio(); delay(300);

  Serial.println("Done sending IR codes.");
}

void setup() {
  Serial.begin(115200);
  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  Serial.println("TV-B-Gone ready. Press BOOT button.");
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