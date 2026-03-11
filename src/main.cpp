#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_PIN      3
#define BUTTON_PIN  9
#define LED_PIN     8

IRsend irsend(IR_PIN);

// tvs ir codes

void sendSamsung() {
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  irsend.sendSAMSUNG(0xE0E019E6); delay(50);
  irsend.sendSAMSUNG(0xE0E0F00F); delay(50);
}

void sendLG() {
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  irsend.sendNEC(0x20DFF807, 32); delay(50);
  irsend.sendNEC(0x20DF40BF, 32); delay(50);
}

void sendSony() {
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA8C, 12); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA8C, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x740C, 20); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x290C, 15); delay(30); }
}

void sendPhilips() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
}

void sendPanasonic() {
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  irsend.sendPanasonic(0x4004, 0x1000E0E); delay(100);
}

void sendSharp() {
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA55C03F, 32); delay(100);
}

void sendToshiba() {
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FDB847, 32); delay(100);
}

void sendHitachi() {
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
}

void sendHisense() {
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF00FF, 32); delay(100);
}

void sendTCL() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
}

void sendVizio() {
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
}

void sendJVC() {
  irsend.sendJVC(0xC5E8, 16, false); delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
}

void sendMitsubishi() {
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
}

void sendVestel() {
  irsend.sendNEC(0x57E300FF, 32); delay(100);
  irsend.sendNEC(0x57E300FF, 32); delay(100);
}

void sendBeko() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
}

// projectors thingy starts from here

void sendBenQ() {
  irsend.sendNEC(0xD5200000, 32); delay(100);
  irsend.sendNEC(0xD5208877, 32); delay(100);
  irsend.sendNEC(0xD520F00F, 32); delay(100);
  irsend.sendNEC(0xD520807F, 32); delay(100);
}

void sendEpson() {
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x61A840BF, 32); delay(100);
}

void sendOptoma() {
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43807F, 32); delay(100);
  irsend.sendNEC(0xBC430AF5, 32); delay(100);
}

void sendViewSonic() {
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877629D, 32); delay(100);
}

void sendAcer() {
  irsend.sendNEC(0x78871308, 32); delay(100);
  irsend.sendNEC(0xEF10629D, 32); delay(100);
  irsend.sendNEC(0xEF10C03F, 32); delay(100);
  irsend.sendNEC(0xEF10E01F, 32); delay(100);
}

void sendInfocus() {
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
  irsend.sendNEC(0xB24D40BF, 32); delay(100);
}

void sendNECProjector() {
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
  irsend.sendNEC(0x7F80C03F, 32); delay(100);
  irsend.sendNEC(0x7F80807F, 32); delay(100);
}

void sendPanasonicProjector() {
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
  irsend.sendPanasonic(0x4004, 0x1004E4F); delay(100);
}

void sendSonyProjector() {
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x290C, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA90, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x2D90, 20); delay(30); }
}

void sendCasio() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1807F, 32); delay(100);
}

void sendSanyo() {
  irsend.sendNEC(0x4CB3F00F, 32); delay(100);
  irsend.sendNEC(0x4CB3F00F, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
  irsend.sendNEC(0x0CF39060, 32); delay(100);
}

void sendMitsubishiProjector() {
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB807F, 32); delay(100);
  irsend.sendNEC(0x44BBC03F, 32); delay(100);
}

void sendHitachiProjector() {
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F0C03F, 32); delay(100);
}

void sendDell() {
  irsend.sendNEC(0x05FA40BF, 32); delay(100);
  irsend.sendNEC(0x05FA40BF, 32); delay(100);
  irsend.sendNEC(0x05FAC03F, 32); delay(100); 
  irsend.sendNEC(0x05FA807F, 32); delay(100); 
}

void sendRicoh() {
  irsend.sendNEC(0xF708F00F, 32); delay(100);
  irsend.sendNEC(0xF708F00F, 32); delay(100);
  irsend.sendNEC(0xF70840BF, 32); delay(100);
}

void sendBarco() {
  irsend.sendNEC(0x8F7040BF, 32); delay(100);
  irsend.sendNEC(0x8F7040BF, 32); delay(100);
  irsend.sendNEC(0x8F70C03F, 32); delay(100);
}

void sendChristie() {
  irsend.sendNEC(0xC738F00F, 32); delay(100);
  irsend.sendNEC(0xC738F00F, 32); delay(100);
  irsend.sendNEC(0xC73840BF, 32); delay(100);
}

void sendCanon() {
  irsend.sendNEC(0x0CF3906F, 32); delay(100); 
  irsend.sendNEC(0x0CF3906F, 32); delay(100);
  irsend.sendNEC(0x0CF340BF, 32); delay(100); 
  irsend.sendNEC(0x0CF3C03F, 32); delay(100); 
}

void sendSMART() {
  irsend.sendNEC(0xF30CF00F, 32); delay(100);
  irsend.sendNEC(0xF30CF00F, 32); delay(100);
  irsend.sendNEC(0xF30C40BF, 32); delay(100); 
  irsend.sendNEC(0xF30C807F, 32); delay(100); 
}

void sendPromethean() {
  irsend.sendNEC(0xAB5440BF, 32); delay(100);
  irsend.sendNEC(0xAB5440BF, 32); delay(100);
  irsend.sendNEC(0xAB54C03F, 32); delay(100); 
}

void sendNexTouch() {
  irsend.sendNEC(0x40BF40BF, 32); delay(100); 
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
}

// skiddy's job job sahur
void sendAll() {
  Serial.println("SkidBGone is the best TvBGone firmware bro. Starting..."); delay(50);

  Serial.println("Skiddy is turning off TVs... Every TV is cooked lol."); 

  Serial.println("[TV 1/14] Samsung");      sendSamsung();           delay(300);
  Serial.println("[TV 2/14] LG");           sendLG();                delay(300);
  Serial.println("[TV 3/14] Sony TV");      sendSony();              delay(300);
  Serial.println("[TV 4/14] Philips");      sendPhilips();           delay(300);
  Serial.println("[TV 5/14] Panasonic TV"); sendPanasonic();         delay(300);
  Serial.println("[TV 6/14] Sharp");        sendSharp();             delay(300);
  Serial.println("[TV 7/14] Toshiba");      sendToshiba();           delay(300);
  Serial.println("[TV 8/14] Hitachi TV");   sendHitachi();           delay(300);
  Serial.println("[TV 9/14] Hisense");      sendHisense();           delay(300);
  Serial.println("[TV 10/14] TCL");         sendTCL();               delay(300);
  Serial.println("[TV 11/14] Vizio");       sendVizio();             delay(300);
  Serial.println("[TV 12/14] JVC TV");      sendJVC();               delay(300);
  Serial.println("[TV 13/14] Mitsubishi TV");sendMitsubishi();       delay(300);
  Serial.println("[TV 14/14] Vestel/Beko"); sendVestel(); sendBeko();delay(300);

  Serial.println("Wtf projector are turned off, why? Skiddy turned it off bro.");

  Serial.println("[1/15] BenQ");         sendBenQ();              delay(300);
  Serial.println("[2/15] Epson");        sendEpson();             delay(300);
  Serial.println("[3/15] Optoma");       sendOptoma();            delay(300);
  Serial.println("[4/15] ViewSonic");    sendViewSonic();         delay(300);
  Serial.println("[5/15] Acer");         sendAcer();              delay(300);
  Serial.println("[6/15] Infocus");      sendInfocus();           delay(300);
  Serial.println("[7/15] NEC Projector");sendNECProjector();      delay(300);
  Serial.println("[8/15] Panasonic PJ"); sendPanasonicProjector();delay(300);
  Serial.println("[9/15] Sony VPL");     sendSonyProjector();     delay(300);
  Serial.println("[10/15] Casio");       sendCasio();             delay(300);
  Serial.println("[11/15] Sanyo");       sendSanyo();             delay(300);
  Serial.println("[12/15] Mitsubishi PJ");sendMitsubishiProjector();delay(300);
  Serial.println("[13/15] Hitachi PJ");  sendHitachiProjector();  delay(300);
  Serial.println("[14/15] Dell");        sendDell();              delay(300);
  Serial.println("[15/15] Ricoh");       sendRicoh();             delay(300);

  Serial.println("Smart desks are turning off, why? Only this skid knows.");

  Serial.println("[1/6] Barco");        sendBarco();             delay(300);
  Serial.println("[2/6] Christie");     sendChristie();          delay(300);
  Serial.println("[3/6] Canon PJ");     sendCanon();             delay(300);
  Serial.println("[4/6] SMART Board");  sendSMART();             delay(300);
  Serial.println("[5/6] Promethean");   sendPromethean();        delay(300);
  Serial.println("[6/6] NexTouch");     sendNexTouch();          delay(300);

  Serial.println("Skiddy done it's job. Press BOOT to restart SkidBGone FW.");
}

void setup() {
  Serial.begin(115200);
  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  Serial.println("Skid are you ready? Yeah im ready bradar. Press BOOT to start.");
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