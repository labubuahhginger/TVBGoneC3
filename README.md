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

# SkidBGone 📺💀

> *"Every TV in the room. Every projector in the school. Every smart board in the hallway. Skiddy don't care."*

**SkidBGone** is a TV-B-Gone firmware for the ESP32-C3 SuperMini. One button press and Skiddy goes to work — blasting IR codes at everything in sight.

![CI](https://github.com/labubuahhginger/SkidBGone/actions/workflows/build.yml/badge.svg)
![Platform](https://img.shields.io/badge/platform-ESP32--C3-red)
![Framework](https://img.shields.io/badge/framework-Arduino-blue)

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

Skiddy sends IR power-off codes to **30+ devices** — TVs, projectors, smart boards — one by one, until the room goes dark.

> *"Skiddy done it's job."*

---

## 🔧 Hardware

| Part | Info |
|------|------|
| ESP32-C3 SuperMini | Main board |
| IR Transmitter (3-pin) | Has built-in transistor, plug and play |

### Wiring

```
IR Transmitter  →  ESP32-C3 SuperMini
VCC             →  3.3V
GND             →  GND
DAT             →  GPIO3
```

- **Trigger:** BOOT button (GPIO9)
- **LED indicator:** Built-in (GPIO8) — glows while Skiddy is working

---

## 📡 Protocols

`NEC` `SIRC 12/15/20-bit` `RC5` `RC6` `JVC` `Panasonic`

---

## 📺 Supported Devices

**TVs**
Samsung · LG · Sony · Philips · Panasonic · Sharp · Toshiba · Hitachi · Hisense · TCL · Vizio · JVC · Mitsubishi · Vestel · Beko

**Projectors**
BenQ · Epson · Optoma · ViewSonic · Acer · Infocus · NEC · Panasonic · Sony VPL · Casio · Sanyo · Mitsubishi · Hitachi · Dell · Ricoh

**Pro Displays & Smart Boards**
Barco · Christie · Canon · SMART Board · Promethean · NexTouch *(experimental)*

---

## 🚀 Build & Flash

```bash
# Build
pio run

# Flash
pio run -t upload

# Serial monitor (watch Skiddy work)
pio device monitor
```

---

## ▶️ Usage

1. Flash the firmware
2. Press **BOOT**
3. LED turns on — Skiddy is unleashed
4. LED turns off — Skiddy is done
5. Check Serial Monitor for the full play-by-play

---

## 📁 Project Structure

```
SkidBGone/
├── src/
│   └── main.cpp        # Skiddy lives here
├── .github/
│   └── workflows/
│       └── build.yml   # CI — makes sure Skiddy compiles
├── platformio.ini
└── README.md
```

---

## ⚠️ Disclaimer

This project is for **educational purposes** and **your own devices only**.  
Don't let Skiddy loose in public. He has no chill.

---

## 📜 License

MIT — Skiddy is free.