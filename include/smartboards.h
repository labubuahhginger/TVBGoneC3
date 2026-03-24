#ifndef SMARTBOARDS_H
#define SMARTBOARDS_H

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

extern IRsend irsend;

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

void sendNewline() {
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
  irsend.sendNEC(0x1F60C03F, 32); delay(100);
}

void sendViewSonicBoard() {
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877807F, 32); delay(100);
}

void sendBenQBoard() {
  irsend.sendNEC(0xD52040BF, 32); delay(100);
  irsend.sendNEC(0xD52040BF, 32); delay(100);
  irsend.sendNEC(0xD520C03F, 32); delay(100);
}

void sendClevertouch() {
  irsend.sendNEC(0x38C740BF, 32); delay(100);
  irsend.sendNEC(0x38C740BF, 32); delay(100);
  irsend.sendNEC(0x38C7C03F, 32); delay(100);
}

void sendMaxhub() {
  irsend.sendNEC(0x6E9140BF, 32); delay(100);
  irsend.sendNEC(0x6E9140BF, 32); delay(100);
  irsend.sendNEC(0x6E91807F, 32); delay(100);
}

void sendHikvision() {
  irsend.sendNEC(0x45BA40BF, 32); delay(100);
  irsend.sendNEC(0x45BA40BF, 32); delay(100);
  irsend.sendNEC(0x45BAC03F, 32); delay(100);
}

void sendLegamaster() {
  irsend.sendNEC(0xB748F00F, 32); delay(100);
  irsend.sendNEC(0xB748F00F, 32); delay(100);
  irsend.sendNEC(0xB74840BF, 32); delay(100);
}

void sendIQTouch() {
  irsend.sendNEC(0x9E6140BF, 32); delay(100);
  irsend.sendNEC(0x9E6140BF, 32); delay(100);
  irsend.sendNEC(0x9E61C03F, 32); delay(100);
}

void sendDahua() {
  irsend.sendNEC(0xCB3440BF, 32); delay(100);
  irsend.sendNEC(0xCB3440BF, 32); delay(100);
  irsend.sendNEC(0xCB34C03F, 32); delay(100);
}

void sendDTEN() {
  irsend.sendNEC(0x3DC240BF, 32); delay(100);
  irsend.sendNEC(0x3DC240BF, 32); delay(100);
  irsend.sendNEC(0x3DC2C03F, 32); delay(100);
}

void sendItatouch() {
  irsend.sendNEC(0x7C8340BF, 32); delay(100);
  irsend.sendNEC(0x7C8340BF, 32); delay(100);
  irsend.sendNEC(0x7C83C03F, 32); delay(100);
}

void sendPlanar() {
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
}

void sendLeyard() {
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
}

void sendAbsen() {
  irsend.sendNEC(0x08F740BF, 32); delay(100);
  irsend.sendNEC(0x08F740BF, 32); delay(100);
}

void sendOptomaBoard() {
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
}

void sendELO() {
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
}




#include "utils.h"

#ifndef REGISTER_TARGET
#define REGISTER_TARGET(func) { #func, func }
#endif

struct SmartBoardBrandTarget {
    const char* funcName;
    void (*sendFunc)();
};

const SmartBoardBrandTarget SmartBoardBrands[] = {
    REGISTER_TARGET(sendBarco),
    REGISTER_TARGET(sendChristie),
    REGISTER_TARGET(sendCanon),
    REGISTER_TARGET(sendSMART),
    REGISTER_TARGET(sendPromethean),
    REGISTER_TARGET(sendNexTouch),
    REGISTER_TARGET(sendNewline),
    REGISTER_TARGET(sendViewSonicBoard),
    REGISTER_TARGET(sendBenQBoard),
    REGISTER_TARGET(sendClevertouch),
    REGISTER_TARGET(sendMaxhub),
    REGISTER_TARGET(sendHikvision),
    REGISTER_TARGET(sendLegamaster),
    REGISTER_TARGET(sendIQTouch),
    REGISTER_TARGET(sendDahua),
    REGISTER_TARGET(sendDTEN),
    REGISTER_TARGET(sendItatouch),
    REGISTER_TARGET(sendPlanar),
    REGISTER_TARGET(sendLeyard),
    REGISTER_TARGET(sendAbsen),
    REGISTER_TARGET(sendOptomaBoard),
    REGISTER_TARGET(sendELO),
};

const int numSmartBoardBrands = sizeof(SmartBoardBrands) / sizeof(SmartBoardBrands[0]);

void sendAllSmartBoards() {
  Serial.println("Smart desks are turning off, why? Only this skid knows.");
  for (int i = 0; i < numSmartBoardBrands; i++) {
    Serial.print("[");
    Serial.print(i + 1);
    Serial.print("/");
    Serial.print(numSmartBoardBrands);
    Serial.print("] ");
    printBrandName(SmartBoardBrands[i].funcName);
    Serial.println();

    SmartBoardBrands[i].sendFunc();
    delay(300);
  }
}

#endif
