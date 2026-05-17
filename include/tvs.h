#ifndef TVS_H
#define TVS_H

#include "utils.h"

extern IRsend irsend;

void sendSamsung() {
  irsend.sendSAMSUNG(0xE0E040BF); delay(20);
  irsend.sendSAMSUNG(0xE0E040BF); delay(20);
  irsend.sendSAMSUNG(0xE0E019E6); delay(20);
  irsend.sendSAMSUNG(0xE0E0F00F); delay(20);
}

void sendLG() {
  irsend.sendNEC(0x20DF10EF, 32); delay(20);
  irsend.sendNEC(0x20DF10EF, 32); delay(20);
  irsend.sendNEC(0x20DFF807, 32); delay(20);
  irsend.sendNEC(0x20DF40BF, 32); delay(20);
}

void sendSony() {
  for (int i = 0; i < 2; i++) { irsend.sendSony(0xA8C, 12); delay(15); }
  for (int i = 0; i < 2; i++) { irsend.sendSony(0xA8C, 15); delay(15); }
  for (int i = 0; i < 2; i++) { irsend.sendSony(0x740C, 20); delay(15); }
  for (int i = 0; i < 2; i++) { irsend.sendSony(0x290C, 15); delay(15); }
}

void sendPhilips() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendRC6(0x800F040C, 32); delay(35);
}

void sendPanasonic() {
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(35);
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(35);
  irsend.sendPanasonic(0x4004, 0x1000E0E); delay(35);
}

void sendSharp() {
  irsend.sendNEC(0xAA5540BF, 32); delay(35);
  irsend.sendNEC(0xAA5540BF, 32); delay(35);
  irsend.sendNEC(0xAA55C03F, 32); delay(35);
}

void sendToshiba() {
  irsend.sendNEC(0x02FD48B7, 32); delay(35);
  irsend.sendNEC(0x02FD48B7, 32); delay(35);
  irsend.sendNEC(0x02FDB847, 32); delay(35);
}

void sendHitachi() {
  irsend.sendNEC(0xD0F040BF, 32); delay(35);
  irsend.sendNEC(0xD0F040BF, 32); delay(35);
}

void sendHisense() {
  irsend.sendNEC(0x40BF40BF, 32); delay(35);
  irsend.sendNEC(0x40BF40BF, 32); delay(35);
  irsend.sendNEC(0x40BF00FF, 32); delay(35);
}

void sendTCL() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendNEC(0x01FE48B7, 32); delay(35);
  irsend.sendNEC(0x01FE48B7, 32); delay(35);
}

void sendVizio() {
  irsend.sendNEC(0xE1F8A659, 32); delay(35);
  irsend.sendNEC(0xE1F8A659, 32); delay(35);
}

void sendJVC() {
  irsend.sendJVC(0xC5E8, 16, false); delay(20);
  irsend.sendJVC(0xC5E8, 16, true);  delay(20);
}

void sendMitsubishi() {
  irsend.sendNEC(0x44BB40BF, 32); delay(35);
  irsend.sendNEC(0x44BB40BF, 32); delay(35);
}

void sendVestel() {
  irsend.sendNEC(0x57E300FF, 32); delay(35);
  irsend.sendNEC(0x57E300FF, 32); delay(35);
}

void sendBeko() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(35);
  irsend.sendNEC(0x5EA1F00F, 32); delay(35);
}

void sendHaier() {
  irsend.sendNEC(0x19E640BF, 32); delay(35);
  irsend.sendNEC(0x19E640BF, 32); delay(35);
  irsend.sendNEC(0x19E6807F, 32); delay(35);
}

void sendXiaomi() {
  irsend.sendNEC(0x04FB40BF, 32); delay(35);
  irsend.sendNEC(0x04FB40BF, 32); delay(35);
  irsend.sendNEC(0x04FB807F, 32); delay(35);
}

void sendSkyworth() {
  irsend.sendNEC(0xDF2040BF, 32); delay(35);
  irsend.sendNEC(0xDF2040BF, 32); delay(35);
  irsend.sendNEC(0xDF20C03F, 32); delay(35);
}

void sendAOC() {
  irsend.sendNEC(0x8E7140BF, 32); delay(35);
  irsend.sendNEC(0x8E7140BF, 32); delay(35);
  irsend.sendNEC(0x8E71C03F, 32); delay(35);
}

void sendChanghong() {
  irsend.sendNEC(0x10EF40BF, 32); delay(35);
  irsend.sendNEC(0x10EF40BF, 32); delay(35);
  irsend.sendNEC(0x10EFC03F, 32); delay(35);
}

void sendGrundig() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendRC6(0x800F040C, 32); delay(35);
}

void sendLoewe() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendRC6(0x800F040C, 32); delay(35);
  irsend.sendRC6(0x800F0408, 32); delay(35);
}

void sendMedion() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(35);
  irsend.sendNEC(0x04FB40BF, 32); delay(35);
}

void sendTelefunken() {
  irsend.sendNEC(0x00FF8877, 32); delay(35);
  irsend.sendNEC(0x00FF7788, 32); delay(35);
}

void sendBlaupunkt() {
  irsend.sendNEC(0x00FFC837, 32); delay(35);
  irsend.sendNEC(0x00FF37C8, 32); delay(35);
}

void sendPioneer() {
  irsend.sendNEC(0xAA5540BF, 32); delay(35);
  irsend.sendNEC(0xAA5540BF, 32); delay(35);
}

void sendRCA() {
  irsend.sendNEC(0x01FE40BF, 32); delay(35);
  irsend.sendNEC(0x01FE40BF, 32); delay(35);
}

void sendInsignia() {
  irsend.sendNEC(0x807F40BF, 32); delay(35);
  irsend.sendNEC(0x807F40BF, 32); delay(35);
  irsend.sendNEC(0x10EF40BF, 32); delay(35);
}

void sendElement() {
  irsend.sendNEC(0xFB0440BF, 32); delay(35);
  irsend.sendNEC(0xFB0440BF, 32); delay(35);
}

void sendWestinghouse() {
  irsend.sendNEC(0x5EA140BF, 32); delay(35);
  irsend.sendNEC(0x5EA140BF, 32); delay(35);
}

void sendSanyoTV() {
  irsend.sendNEC(0x1CE340BF, 32); delay(35);
  irsend.sendNEC(0x1CE340BF, 32); delay(35);
  irsend.sendNEC(0x4CB340BF, 32); delay(35);
}

void sendFunai() {
  irsend.sendNEC(0x00FF40BF, 32); delay(35);
  irsend.sendNEC(0x00FF807F, 32); delay(35);
}

void sendOnida() {
  irsend.sendNEC(0xF30C40BF, 32); delay(35);
  irsend.sendNEC(0xF30C40BF, 32); delay(35);
  irsend.sendNEC(0xF30CC03F, 32); delay(35);
}

void sendVu() {
  irsend.sendNEC(0x8E7140BF, 32); delay(35);
  irsend.sendNEC(0x8E7140BF, 32); delay(35);
}

void sendThomson() {
  irsend.sendNEC(0x00FF20DF, 32); delay(35);
  irsend.sendNEC(0x00FFDF20, 32); delay(35);
}

void sendCoocaa() {
  irsend.sendNEC(0xA25D40BF, 32); delay(35);
  irsend.sendNEC(0xA25D40BF, 32); delay(35);
  irsend.sendNEC(0xA25DC03F, 32); delay(35);
}

const BrandTarget TvBrands[] = {
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
    REGISTER_TARGET(sendXiaomi),
    REGISTER_TARGET(sendSkyworth),
    REGISTER_TARGET(sendAOC),
    REGISTER_TARGET(sendChanghong),
    REGISTER_TARGET(sendGrundig),
    REGISTER_TARGET(sendLoewe),
    REGISTER_TARGET(sendMedion),
    REGISTER_TARGET(sendTelefunken),
    REGISTER_TARGET(sendBlaupunkt),
    REGISTER_TARGET(sendPioneer),
    REGISTER_TARGET(sendRCA),
    REGISTER_TARGET(sendInsignia),
    REGISTER_TARGET(sendElement),
    REGISTER_TARGET(sendWestinghouse),
    REGISTER_TARGET(sendSanyoTV),
    REGISTER_TARGET(sendFunai),
    REGISTER_TARGET(sendOnida),
    REGISTER_TARGET(sendVu),
    REGISTER_TARGET(sendThomson),
    REGISTER_TARGET(sendCoocaa),
};

const int numTvBrands = sizeof(TvBrands) / sizeof(TvBrands[0]);

bool sendAllTVs() {
  return sendAllFromList(TvBrands, numTvBrands, "Skiddy is turning off TVs... Every TV is cooked lol.");
}

#endif
