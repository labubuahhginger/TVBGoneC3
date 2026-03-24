#ifndef PROJECTORS_H
#define PROJECTORS_H

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

extern IRsend irsend;

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

void sendVivitek() {
  irsend.sendNEC(0xE916F00F, 32); delay(100);
  irsend.sendNEC(0xE916F00F, 32); delay(100);
  irsend.sendNEC(0xE91640BF, 32); delay(100);
}

void sendLGProjector() {
  irsend.sendNEC(0x20DF10EF, 32); delay(100);
  irsend.sendNEC(0x20DF10EF, 32); delay(100);
  irsend.sendNEC(0x20DFF807, 32); delay(100);
}

void sendXGIMI() {
  irsend.sendNEC(0xFF00F00F, 32); delay(100);
  irsend.sendNEC(0xFF00F00F, 32); delay(100);
  irsend.sendNEC(0xFF0040BF, 32); delay(100);
}

void sendJmGo() {
  irsend.sendNEC(0xFB04F00F, 32); delay(100);
  irsend.sendNEC(0xFB04F00F, 32); delay(100);
  irsend.sendNEC(0xFB0440BF, 32); delay(100);
}

void sendAnkerNebula() {
  irsend.sendNEC(0xEF1040BF, 32); delay(100);
  irsend.sendNEC(0xEF1040BF, 32); delay(100);
  irsend.sendNEC(0xEF10807F, 32); delay(100);
}
void sendAsusProjector() {
  irsend.sendNEC(0x7A8540BF, 32); delay(100);
  irsend.sendNEC(0x7A8540BF, 32); delay(100);
  irsend.sendNEC(0x7A85C03F, 32); delay(100);
}

void sendSharpProjector() {
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA55807F, 32); delay(100);
  irsend.sendNEC(0xAA55C03F, 32); delay(100);
}

void sendKodak() {
  irsend.sendNEC(0xE41B40BF, 32); delay(100);
  irsend.sendNEC(0xE41B40BF, 32); delay(100);
  irsend.sendNEC(0xE41BC03F, 32); delay(100);
}

void sendFormovie() {
  irsend.sendNEC(0x28D740BF, 32); delay(100);
  irsend.sendNEC(0x28D740BF, 32); delay(100);
  irsend.sendNEC(0x28D7C03F, 32); delay(100);
}

void sendDangbei() {
  irsend.sendNEC(0xF50A40BF, 32); delay(100);
  irsend.sendNEC(0xF50A40BF, 32); delay(100);
  irsend.sendNEC(0xF50AC03F, 32); delay(100);
}

void sendRunco() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
}

void sendEiki() {
  irsend.sendNEC(0x38C740BF, 32); delay(100);
  irsend.sendNEC(0x38C740BF, 32); delay(100);
}

void sendJVCProjector() {
  irsend.sendJVC(0xC5E8, 16, false); delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
}

void sendDigitalProjection() {
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
}

void sendProxima() {
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
}

void sendBoxlight() {
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E640BF, 32); delay(100);
}

void sendDukane() {
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
}

void sendBOE() {
  irsend.sendNEC(0x08F740BF, 32); delay(100);
  irsend.sendNEC(0x08F740BF, 32); delay(100);
}

void sendBarcoProjector() {
  irsend.sendNEC(0x8F70C03F, 32); delay(100);
  irsend.sendNEC(0x8F70C03F, 32); delay(100);
}

void sendChristieProjector() {
  irsend.sendNEC(0xC73840BF, 32); delay(100);
  irsend.sendNEC(0xC73840BF, 32); delay(100);
}




#include "utils.h"

#ifndef REGISTER_TARGET
#define REGISTER_TARGET(func) { #func, func }
#endif

struct ProjectorBrandTarget {
    const char* funcName;
    void (*sendFunc)();
};

const ProjectorBrandTarget ProjectorBrands[] = {
    REGISTER_TARGET(sendBenQ),
    REGISTER_TARGET(sendEpson),
    REGISTER_TARGET(sendOptoma),
    REGISTER_TARGET(sendViewSonic),
    REGISTER_TARGET(sendAcer),
    REGISTER_TARGET(sendInfocus),
    REGISTER_TARGET(sendNECProjector),
    REGISTER_TARGET(sendPanasonicProjector),
    REGISTER_TARGET(sendSonyProjector),
    REGISTER_TARGET(sendCasio),
    REGISTER_TARGET(sendSanyo),
    REGISTER_TARGET(sendMitsubishiProjector),
    REGISTER_TARGET(sendHitachiProjector),
    REGISTER_TARGET(sendDell),
    REGISTER_TARGET(sendRicoh),
    REGISTER_TARGET(sendVivitek),
    REGISTER_TARGET(sendLGProjector),
    REGISTER_TARGET(sendXGIMI),
    REGISTER_TARGET(sendJmGo),
    REGISTER_TARGET(sendAnkerNebula),
    REGISTER_TARGET(sendAsusProjector),
    REGISTER_TARGET(sendSharpProjector),
    REGISTER_TARGET(sendKodak),
    REGISTER_TARGET(sendFormovie),
    REGISTER_TARGET(sendDangbei),
    REGISTER_TARGET(sendRunco),
    REGISTER_TARGET(sendEiki),
    REGISTER_TARGET(sendJVCProjector),
    REGISTER_TARGET(sendDigitalProjection),
    REGISTER_TARGET(sendProxima),
    REGISTER_TARGET(sendBoxlight),
    REGISTER_TARGET(sendDukane),
    REGISTER_TARGET(sendBOE),
    REGISTER_TARGET(sendBarcoProjector),
    REGISTER_TARGET(sendChristieProjector),
};

const int numProjectorBrands = sizeof(ProjectorBrands) / sizeof(ProjectorBrands[0]);

void sendAllProjectors() {
  Serial.println("Wtf projector are turned off, why? Skiddy turned it off bro.");
  for (int i = 0; i < numProjectorBrands; i++) {
    Serial.print("[");
    Serial.print(i + 1);
    Serial.print("/");
    Serial.print(numProjectorBrands);
    Serial.print("] ");
    printBrandName(ProjectorBrands[i].funcName);
    Serial.println();

    ProjectorBrands[i].sendFunc();
    delay(300);
  }
}

#endif
