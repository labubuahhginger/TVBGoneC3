#ifndef TVS_H
#define TVS_H

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

extern IRsend irsend;

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

void sendHaier() {
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E6807F, 32); delay(100);
}

void sendInsignia() {
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x10EF40BF, 32); delay(100);
}

void sendSanyoTV() {
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
}

void sendFunai() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
}

void sendMagnavox() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
}

void sendEmerson() {
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
  irsend.sendNEC(0x01FE807F, 32); delay(100);
}

void sendGrundig() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
}

void sendXiaomi() {
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB807F, 32); delay(100);
}

void sendSkyworth() {
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
  irsend.sendNEC(0xDF20C03F, 32); delay(100);
}

void sendAOC() {
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
  irsend.sendNEC(0x8E71C03F, 32); delay(100);
}

void sendCoocaa() {
  irsend.sendNEC(0xA25D40BF, 32); delay(100);
  irsend.sendNEC(0xA25D40BF, 32); delay(100);
  irsend.sendNEC(0xA25DC03F, 32); delay(100);
}

void sendRealme() {
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FBC03F, 32); delay(100);
}

void sendSceptre() {
  irsend.sendNEC(0x61A840BF, 32); delay(100);
  irsend.sendNEC(0x61A840BF, 32); delay(100);
  irsend.sendNEC(0x61A8C03F, 32); delay(100);
}

void sendPolaroid() {
  irsend.sendNEC(0xCF3040BF, 32); delay(100);
  irsend.sendNEC(0xCF3040BF, 32); delay(100);
  irsend.sendNEC(0xCF30807F, 32); delay(100);
}

void sendChanghong() {
  irsend.sendNEC(0x10EF40BF, 32); delay(100);
  irsend.sendNEC(0x10EF40BF, 32); delay(100);
  irsend.sendNEC(0x10EFC03F, 32); delay(100);
}

void sendMedion() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
}

void sendLoewe() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
  irsend.sendRC6(0x800F0408, 32); delay(100);
}

void sendOnida() {
  irsend.sendNEC(0xF30C40BF, 32); delay(100);
  irsend.sendNEC(0xF30C40BF, 32); delay(100);
  irsend.sendNEC(0xF30CC03F, 32); delay(100);
}

void sendZenith() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
}

void sendElement() {
  irsend.sendNEC(0xFB0440BF, 32); delay(100);
  irsend.sendNEC(0xFB0440BF, 32); delay(100);
}

void sendSeiki() {
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
}

void sendWestinghouse() {
  irsend.sendNEC(0x5EA140BF, 32); delay(100);
  irsend.sendNEC(0x5EA140BF, 32); delay(100);
}

void sendSylvania() {
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
}

void sendPioneer() {
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
}

void sendRCA() {
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
}

void sendOrion() {
  irsend.sendNEC(0x02FD40BF, 32); delay(100);
  irsend.sendNEC(0x02FD40BF, 32); delay(100);
}

void sendBPL() {
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
}

void sendVideocon() {
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
}

void sendMicromax() {
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
}

void sendLloyd() {
  irsend.sendNEC(0x08F740BF, 32); delay(100);
  irsend.sendNEC(0x08F740BF, 32); delay(100);
}

void sendIntex() {
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E640BF, 32); delay(100);
}

void sendVu() {
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
}

void sendSansui() {
  irsend.sendNEC(0x57E340BF, 32); delay(100);
  irsend.sendNEC(0x57E340BF, 32); delay(100);
}



#include "utils.h"

#ifndef REGISTER_TARGET
#define REGISTER_TARGET(func) { #func, func }
#endif

struct TvBrandTarget {
    const char* funcName;
    void (*sendFunc)();
};

void sendAkai() {
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FFFF00, 32); delay(100);
}
void sendAlba() {
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF7F80, 32); delay(100);
}
void sendBush() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FFBF40, 32); delay(100);
}
void sendCelcus() {
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FFDF20, 32); delay(100);
}
void sendCello() {
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FFEF10, 32); delay(100);
}
void sendCrown() {
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF6F90, 32); delay(100);
}
void sendDigihome() {
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FFAF50, 32); delay(100);
}
void sendFinlux() {
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FF2FD0, 32); delay(100);
}
void sendJMB() {
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FFCF30, 32); delay(100);
}
void sendLinsar() {
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FF4FB0, 32); delay(100);
}
void sendLuxor() {
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF8F70, 32); delay(100);
}
void sendPolaroidTV() {
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FF0FF0, 32); delay(100);
}
void sendTechwood() {
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FFF708, 32); delay(100);
}
void sendTelefunken() {
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF7788, 32); delay(100);
}
void sendWalker() {
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FFB748, 32); delay(100);
}
void sendBlaupunkt() {
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FF37C8, 32); delay(100);
}
void sendDyon() {
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FFD728, 32); delay(100);
}
void sendHKC() {
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FF57A8, 32); delay(100);
}
void sendKendo() {
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF9768, 32); delay(100);
}
void sendMetz() {
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FF17E8, 32); delay(100);
}
void sendOK() {
  irsend.sendNEC(0x00FF18E7, 32); delay(100);
  irsend.sendNEC(0x00FF18E7, 32); delay(100);
  irsend.sendNEC(0x00FFE718, 32); delay(100);
}
void sendPeaq() {
  irsend.sendNEC(0x00FF9867, 32); delay(100);
  irsend.sendNEC(0x00FF9867, 32); delay(100);
  irsend.sendNEC(0x00FF6798, 32); delay(100);
}
void sendSalora() {
  irsend.sendNEC(0x00FF58A7, 32); delay(100);
  irsend.sendNEC(0x00FF58A7, 32); delay(100);
  irsend.sendNEC(0x00FFA758, 32); delay(100);
}
void sendSwisstec() {
  irsend.sendNEC(0x00FFD827, 32); delay(100);
  irsend.sendNEC(0x00FFD827, 32); delay(100);
  irsend.sendNEC(0x00FF27D8, 32); delay(100);
}
void sendUMC() {
  irsend.sendNEC(0x00FF38C7, 32); delay(100);
  irsend.sendNEC(0x00FF38C7, 32); delay(100);
  irsend.sendNEC(0x00FFC738, 32); delay(100);
}
void sendJTC() {
  irsend.sendNEC(0x00FFB847, 32); delay(100);
  irsend.sendNEC(0x00FFB847, 32); delay(100);
  irsend.sendNEC(0x00FF47B8, 32); delay(100);
}

void sendOnePlus() {
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FF00FF, 32); delay(100);
  irsend.sendNEC(0x00FFFF00, 32); delay(100);
}
void sendMotorolaTV() {
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
  irsend.sendNEC(0x00FF7F80, 32); delay(100);
}
void sendNokiaTV() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FFBF40, 32); delay(100);
}
void sendThomson() {
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FF20DF, 32); delay(100);
  irsend.sendNEC(0x00FFDF20, 32); delay(100);
}
void sendJVCKenwood() {
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FF10EF, 32); delay(100);
  irsend.sendNEC(0x00FFEF10, 32); delay(100);
}
void sendSiloDigital() {
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF906F, 32); delay(100);
  irsend.sendNEC(0x00FF6F90, 32); delay(100);
}
void sendSupersonic() {
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FF50AF, 32); delay(100);
  irsend.sendNEC(0x00FFAF50, 32); delay(100);
}
void sendCraig() {
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FFD02F, 32); delay(100);
  irsend.sendNEC(0x00FF2FD0, 32); delay(100);
}
void sendCurtis() {
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FF30CF, 32); delay(100);
  irsend.sendNEC(0x00FFCF30, 32); delay(100);
}
void sendProscan() {
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FFB04F, 32); delay(100);
  irsend.sendNEC(0x00FF4FB0, 32); delay(100);
}
void sendNaxa() {
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF708F, 32); delay(100);
  irsend.sendNEC(0x00FF8F70, 32); delay(100);
}
void sendViore() {
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FFF00F, 32); delay(100);
  irsend.sendNEC(0x00FF0FF0, 32); delay(100);
}
void sendOlevia() {
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FF08F7, 32); delay(100);
  irsend.sendNEC(0x00FFF708, 32); delay(100);
}
void sendDynex() {
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF8877, 32); delay(100);
  irsend.sendNEC(0x00FF7788, 32); delay(100);
}
void sendAuria() {
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FF48B7, 32); delay(100);
  irsend.sendNEC(0x00FFB748, 32); delay(100);
}
void sendAvera() {
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FFC837, 32); delay(100);
  irsend.sendNEC(0x00FF37C8, 32); delay(100);
}
void sendContex() {
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FF28D7, 32); delay(100);
  irsend.sendNEC(0x00FFD728, 32); delay(100);
}
void sendEKT() {
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FFA857, 32); delay(100);
  irsend.sendNEC(0x00FF57A8, 32); delay(100);
}
void sendGFM() {
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF6897, 32); delay(100);
  irsend.sendNEC(0x00FF9768, 32); delay(100);
}
void sendHannspree() {
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FFE817, 32); delay(100);
  irsend.sendNEC(0x00FF17E8, 32); delay(100);
}

const TvBrandTarget TvBrands[] = {
    REGISTER_TARGET(sendSamsung),
    REGISTER_TARGET(sendLG),
    REGISTER_TARGET(sendSony),
    REGISTER_TARGET(sendPhilips),
    REGISTER_TARGET(sendPanasonic),
    REGISTER_TARGET(sendSharp),
    REGISTER_TARGET(sendToshiba),
    REGISTER_TARGET(sendHitachi),
    REGISTER_TARGET(sendHisense),
    REGISTER_TARGET(sendTCL),
    REGISTER_TARGET(sendVizio),
    REGISTER_TARGET(sendJVC),
    REGISTER_TARGET(sendMitsubishi),
    REGISTER_TARGET(sendVestel),
    REGISTER_TARGET(sendBeko),
    REGISTER_TARGET(sendHaier),
    REGISTER_TARGET(sendInsignia),
    REGISTER_TARGET(sendSanyoTV),
    REGISTER_TARGET(sendFunai),
    REGISTER_TARGET(sendMagnavox),
    REGISTER_TARGET(sendEmerson),
    REGISTER_TARGET(sendGrundig),
    REGISTER_TARGET(sendXiaomi),
    REGISTER_TARGET(sendSkyworth),
    REGISTER_TARGET(sendAOC),
    REGISTER_TARGET(sendCoocaa),
    REGISTER_TARGET(sendRealme),
    REGISTER_TARGET(sendSceptre),
    REGISTER_TARGET(sendPolaroid),
    REGISTER_TARGET(sendChanghong),
    REGISTER_TARGET(sendMedion),
    REGISTER_TARGET(sendLoewe),
    REGISTER_TARGET(sendOnida),
    REGISTER_TARGET(sendZenith),
    REGISTER_TARGET(sendElement),
    REGISTER_TARGET(sendSeiki),
    REGISTER_TARGET(sendWestinghouse),
    REGISTER_TARGET(sendSylvania),
    REGISTER_TARGET(sendPioneer),
    REGISTER_TARGET(sendRCA),
    REGISTER_TARGET(sendOrion),
    REGISTER_TARGET(sendBPL),
    REGISTER_TARGET(sendVideocon),
    REGISTER_TARGET(sendMicromax),
    REGISTER_TARGET(sendLloyd),
    REGISTER_TARGET(sendIntex),
    REGISTER_TARGET(sendVu),
    REGISTER_TARGET(sendSansui),
    REGISTER_TARGET(sendAkai),
    REGISTER_TARGET(sendAlba),
    REGISTER_TARGET(sendBush),
    REGISTER_TARGET(sendCelcus),
    REGISTER_TARGET(sendCello),
    REGISTER_TARGET(sendCrown),
    REGISTER_TARGET(sendDigihome),
    REGISTER_TARGET(sendFinlux),
    REGISTER_TARGET(sendJMB),
    REGISTER_TARGET(sendLinsar),
    REGISTER_TARGET(sendLuxor),
    REGISTER_TARGET(sendPolaroidTV),
    REGISTER_TARGET(sendTechwood),
    REGISTER_TARGET(sendTelefunken),
    REGISTER_TARGET(sendWalker),
    REGISTER_TARGET(sendBlaupunkt),
    REGISTER_TARGET(sendDyon),
    REGISTER_TARGET(sendHKC),
    REGISTER_TARGET(sendKendo),
    REGISTER_TARGET(sendMetz),
    REGISTER_TARGET(sendOK),
    REGISTER_TARGET(sendPeaq),
    REGISTER_TARGET(sendSalora),
    REGISTER_TARGET(sendSwisstec),
    REGISTER_TARGET(sendUMC),
    REGISTER_TARGET(sendJTC),
    REGISTER_TARGET(sendOnePlus),
    REGISTER_TARGET(sendMotorolaTV),
    REGISTER_TARGET(sendNokiaTV),
    REGISTER_TARGET(sendThomson),
    REGISTER_TARGET(sendJVCKenwood),
    REGISTER_TARGET(sendSiloDigital),
    REGISTER_TARGET(sendSupersonic),
    REGISTER_TARGET(sendCraig),
    REGISTER_TARGET(sendCurtis),
    REGISTER_TARGET(sendProscan),
    REGISTER_TARGET(sendNaxa),
    REGISTER_TARGET(sendViore),
    REGISTER_TARGET(sendOlevia),
    REGISTER_TARGET(sendDynex),
    REGISTER_TARGET(sendAuria),
    REGISTER_TARGET(sendAvera),
    REGISTER_TARGET(sendContex),
    REGISTER_TARGET(sendEKT),
    REGISTER_TARGET(sendGFM),
    REGISTER_TARGET(sendHannspree),
};

const int numTvBrands = sizeof(TvBrands) / sizeof(TvBrands[0]);

void sendAllTVs() {
  Serial.println("Skiddy is turning off TVs... Every TV is cooked lol.");
  for (int i = 0; i < numTvBrands; i++) {
    Serial.print("[");
    Serial.print(i + 1);
    Serial.print("/");
    Serial.print(numTvBrands);
    Serial.print("] ");
    printBrandName(TvBrands[i].funcName);
    Serial.println();

    TvBrands[i].sendFunc();
    delay(300);
  }
}

#endif
