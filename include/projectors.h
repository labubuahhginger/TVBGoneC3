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

void sendYaber() {
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FFFF00, 32); delay(100);
}
void sendVankyo() {
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF7F80, 32); delay(100);
}
void sendAuKing() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FFBF40, 32); delay(100);
}
void sendGooDee() {
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FFDF20, 32); delay(100);
}
void sendPVO() {
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FFEF10, 32); delay(100);
}
void sendFANGOR() {
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF6F90, 32); delay(100);
}
void sendGzunelic() {
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FFAF50, 32); delay(100);
}
void sendDBPOWER() {
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FF2FD0, 32); delay(100);
}
void sendELEPHAS() {
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FFCF30, 32); delay(100);
}
void sendVIZONO() {
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FF4FB0, 32); delay(100);
}
void sendTOPTRO() {
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF8F70, 32); delay(100);
}
void sendWiMiUS() {
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FF0FF0, 32); delay(100);
}
void sendArtlii() {
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FFF708, 32); delay(100);
}
void sendBIGASUO() {
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF7788, 32); delay(100);
}
void sendHOWWOO() {
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FFB748, 32); delay(100);
}

void sendVAVA() {
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FFFF00, 32); delay(100);
}
void sendAWOL() {
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF7F80, 32); delay(100);
}
void sendHisenseProjector() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FFBF40, 32); delay(100);
}
void sendWemax() {
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FFDF20, 32); delay(100);
}
void sendXiaomiProjector() {
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FFEF10, 32); delay(100);
}
void sendSamsungProjector() {
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF6F90, 32); delay(100);
}
void sendAAXA() {
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FFAF50, 32); delay(100);
}
void sendMiroir() {
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FF2FD0, 32); delay(100);
}
void sendQKK() {
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FFCF30, 32); delay(100);
}
void sendJinhoo() {
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FF4FB0, 32); delay(100);
}
void sendAPEMAN() {
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF8F70, 32); delay(100);
}
void sendCrosstour() {
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FF0FF0, 32); delay(100);
}
void sendHOMPOW() {
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FFF708, 32); delay(100);
}
void sendDRJ() {
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF7788, 32); delay(100);
}
void sendVamvo() {
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FFB748, 32); delay(100);
}
void sendTOPVISION() {
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FF37C8, 32); delay(100);
}
void sendCiBest() {
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FFD728, 32); delay(100);
}
void sendMeer() {
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FF57A8, 32); delay(100);
}
void sendXinteza() {
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF9768, 32); delay(100);
}
void sendCinemango() {
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FF17E8, 32); delay(100);
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
    REGISTER_TARGET(sendYaber),
    REGISTER_TARGET(sendVankyo),
    REGISTER_TARGET(sendAuKing),
    REGISTER_TARGET(sendGooDee),
    REGISTER_TARGET(sendPVO),
    REGISTER_TARGET(sendFANGOR),
    REGISTER_TARGET(sendGzunelic),
    REGISTER_TARGET(sendDBPOWER),
    REGISTER_TARGET(sendELEPHAS),
    REGISTER_TARGET(sendVIZONO),
    REGISTER_TARGET(sendTOPTRO),
    REGISTER_TARGET(sendWiMiUS),
    REGISTER_TARGET(sendArtlii),
    REGISTER_TARGET(sendBIGASUO),
    REGISTER_TARGET(sendHOWWOO),
    REGISTER_TARGET(sendVAVA),
    REGISTER_TARGET(sendAWOL),
    REGISTER_TARGET(sendHisenseProjector),
    REGISTER_TARGET(sendWemax),
    REGISTER_TARGET(sendXiaomiProjector),
    REGISTER_TARGET(sendSamsungProjector),
    REGISTER_TARGET(sendAAXA),
    REGISTER_TARGET(sendMiroir),
    REGISTER_TARGET(sendQKK),
    REGISTER_TARGET(sendJinhoo),
    REGISTER_TARGET(sendAPEMAN),
    REGISTER_TARGET(sendCrosstour),
    REGISTER_TARGET(sendHOMPOW),
    REGISTER_TARGET(sendDRJ),
    REGISTER_TARGET(sendVamvo),
    REGISTER_TARGET(sendTOPVISION),
    REGISTER_TARGET(sendCiBest),
    REGISTER_TARGET(sendMeer),
    REGISTER_TARGET(sendXinteza),
    REGISTER_TARGET(sendCinemango),
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
