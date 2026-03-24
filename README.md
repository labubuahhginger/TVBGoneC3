```
   _____ __   _     ______  ______               
  / ___// /__(_)___/ / __ )/ ____/___  ____  ___ 
  \__ \/ //_/ / __  / __  / / __/ __ \/ __ \/ _ \
 ___/ / ,< / / /_/ / /_/ / /_/ / /_/ / / / /  __/
/____/_/|_/_/\__,_/_____/\____/\____/_/ /_/\___/ 

        ( o  o )  < Skiddy can't wait to turn off everything. >
         (  v  )
        /|     |\
        _|_____|_
```

> 🌐 **English** | [Русский](README_RUS.md)

# SkidBGone 📺💀

> *"Every TV in the room. Every projector in the school. Every smart board in the hallway. Skiddy don't care."*

**SkidBGone** is a TV-B-Gone firmware for the **ESP32-C3 SuperMini**. One button press and Skiddy goes to work — blasting IR codes at everything in sight.

[![CI](https://github.com/labubuahhginger/SkidBGone/actions/workflows/build.yml/badge.svg)](https://github.com/labubuahhginger/SkidBGone/actions)
![Platform](https://img.shields.io/badge/platform-ESP32--C3-red?logo=espressif)
![Framework](https://img.shields.io/badge/framework-Arduino-teal?logo=arduino)
![License](https://img.shields.io/badge/license-MIT-green)
![Devices](https://img.shields.io/badge/devices-104%2B-blueviolet)

---

## 🐛 Meet Skiddy

```
    ( o  o )
     (  v  )     Skiddy is a little guy who walks around
    /|     |\    and turns off every screen he sees.
    _|_____|_    Nobody is safe. Not even the projector
                 in the back of the classroom.
```

Skiddy is the official mascot of SkidBGone. He doesn't know what mercy is.

---

## ⚡ What it does

One button press. Skiddy sends IR power-off codes to **104+ devices** — TVs, projectors, and smart boards — one by one, until the room goes dark.

| Category | Count |
|---|---|
| 📺 TVs | 47 brands |
| 📽️ Projectors | 35 brands |
| 🖥️ Smart Boards & Pro Displays | 22 brands |

> *"Skiddy done it's job."*

---

## 🔧 Hardware

| Part | Details |
|---|---|
| ESP32-C3 SuperMini | Main board |
| IR Transmitter (3-pin) | Built-in transistor, plug and play |

### Wiring

```
IR Transmitter  →  ESP32-C3 SuperMini
VCC             →  5V
GND             →  GND
DAT             →  GPIO3
```

**BOOT button** → GPIO9 (trigger)  
**LED indicator** → GPIO8, active LOW — glows while Skiddy is working

---

## 📡 Supported Protocols

`NEC` `SAMSUNG` `SIRC 12-bit` `SIRC 15-bit` `SIRC 20-bit` `RC5` `RC6` `JVC` `Panasonic`

---

## 📺 Supported Devices

<details>
<summary><b>TVs (47 brands)</b></summary>

Samsung · LG · Sony · Philips · Panasonic · Sharp · Toshiba · Hitachi · Hisense · TCL · Vizio · JVC · Mitsubishi · Vestel/Beko · Haier · Insignia · Sanyo · Funai · Magnavox · Emerson · Grundig · Xiaomi · Skyworth · AOC · Coocaa · Realme · Sceptre · Polaroid · Changhong · Medion · Loewe · Onida · Zenith · Element · Seiki · Westinghouse · Sylvania · Pioneer · RCA · Orion · BPL · Videocon · Micromax · Lloyd · Intex · Vu · Sansui

</details>

<details>
<summary><b>Projectors (35 brands)</b></summary>

BenQ · Epson · Optoma · ViewSonic · Acer · Infocus · NEC · Panasonic · Sony VPL · Casio · Sanyo · Mitsubishi · Hitachi · Dell · Ricoh · Vivitek · LG Minibeam · XGIMI · JmGo · Anker Nebula · Asus · Sharp PJ · Kodak · Formovie · Dangbei · Runco · Eiki · JVC Projector · Digital Projection · Proxima · Boxlight · Dukane · BOE · Barco Projector · Christie Projector

</details>

<details>
<summary><b>Smart Boards & Pro Displays (22 brands)</b></summary>

Barco · Christie · Canon · SMART Board · Promethean · NexTouch · Newline · ViewSonic IFP · BenQ Board · Clevertouch · Maxhub · Hikvision · Legamaster · IQTouch · Dahua · DTEN · Itatouch · Planar · Leyard · Absen · Optoma Board · ELO

</details>

---

## 🚀 Flash via Browser

No PlatformIO needed. Flash Skiddy straight from your browser:

👉 **[skiddysflasher](https://labubuahhginger.github.io/skiddysflasher)**

Works on Chrome/Edge with Web Serial API. Just plug in your ESP32-C3 and hit Flash.

---

## 🛠️ Build Locally

Requires [PlatformIO](https://platformio.org/).

```bash
# Clone
git clone https://github.com/labubuahhginger/SkidBGone.git
cd SkidBGone

# Build
pio run

# Flash
pio run -t upload

# Watch Skiddy work
pio device monitor
```

---

## ▶️ Usage

1. Flash the firmware
2. Press **BOOT**
3. LED turns **on** — Skiddy is unleashed
4. LED turns **off** — Skiddy is done
5. Open Serial Monitor at `115200` baud for the full play-by-play

---

## 📁 Project Structure

```
SkidBGone/
├── include/
│   ├── tvs.h                 # DB of TV IR codes
│   ├── projectors.h          # DB of Projector IR codes
│   ├── smartboards.h         # DB of Smart Board IR codes
│   └── utils.h               # Dynamic name extraction macro
├── src/
│   └── main.cpp              # The runner — Skiddy lives here
├── .github/
│   └── workflows/
│       └── build.yml         # CI — builds & releases firmware.bin
├── platformio.ini
└── README.md
```

---

## ⚠️ Disclaimer

This project is for **educational purposes** and **your own devices only**.  
Don't let Skiddy loose in public. He has no chill.

---

## 📜 License

MIT — Skiddy is free. Use him wisely.