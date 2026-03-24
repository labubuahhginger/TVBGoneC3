```
   _____ __   _     ______  ______               
  / ___// /__(_)___/ / __ )/ ____/___  ____  ___ 
  \__ \/ //_/ / __  / __  / / __/ __ \/ __ \/ _ \
 ___/ / ,< / / /_/ / /_/ / /_/ / /_/ / / / /  __/
/____/_/|_/_/\__,_/_____/\____/\____/_/ /_/\___/ 

        ( o  o )  < Скидди не может дождаться, чтобы всё выключить. >
         (  v  )
        /|     |\
        _|_____|_
```

> 🌐 [English](README.md) | **Русский**

# SkidBGone 📺💀

> *«Каждый телевизор в комнате. Каждый проектор в школе. Каждая интерактивная доска в коридоре. Скидди не волнует.»*

**SkidBGone** — прошивка в стиле TV-B-Gone для **ESP32-C3 SuperMini**. Одно нажатие кнопки — и Скидди идёт работать, посылая IR-коды на всё что видит.

[![CI](https://github.com/labubuahhginger/SkidBGone/actions/workflows/build.yml/badge.svg)](https://github.com/labubuahhginger/SkidBGone/actions)
![Platform](https://img.shields.io/badge/platform-ESP32--C3-red?logo=espressif)
![Framework](https://img.shields.io/badge/framework-Arduino-teal?logo=arduino)
![License](https://img.shields.io/badge/license-MIT-green)
![Devices](https://img.shields.io/badge/devices-104%2B-blueviolet)

---

## 🐛 Знакомьтесь — Скидди

```
    ( o  o )
     (  v  )     Скидди — маленький чел, который ходит
    /|     |\    и выключает каждый экран на своём пути.
    _|_____|_    Никто не в безопасности. Даже проектор
                 в дальнем углу класса.
```

Скидди — официальный маскот SkidBGone. Он не знает что такое пощада.

---

## ⚡ Что это делает

Одно нажатие. Скидди посылает IR-коды выключения на **104+ устройств** — телевизоры, проекторы и интерактивные доски — одно за другим, пока комната не погрузится в темноту.

| Категория | Количество |
|---|---|
| 📺 Телевизоры | 47 бренда |
| 📽️ Проекторы | 35 брендов |
| 🖥️ Интерактивные доски | 22 брендов |

> *«Скидди сделал своё дело.»*

---

## 🔧 Железо

| Компонент | Детали |
|---|---|
| ESP32-C3 SuperMini | Основная плата |
| IR Передатчик (3-pin) | Встроенный транзистор, подключи и работай |

### Подключение

```
IR Передатчик   →  ESP32-C3 SuperMini
VCC             →  5V
GND             →  GND
DAT             →  GPIO3
```

**Кнопка BOOT** → GPIO9 (запуск)  
**LED индикатор** → GPIO8, активный LOW — горит пока Скидди работает

---

## 📡 Поддерживаемые протоколы

`NEC` `SAMSUNG` `SIRC 12-bit` `SIRC 15-bit` `SIRC 20-bit` `RC5` `RC6` `JVC` `Panasonic`

---

## 📺 Поддерживаемые устройства

<details>
<summary><b>Телевизоры (47 брендов)</b></summary>

Samsung · LG · Sony · Philips · Panasonic · Sharp · Toshiba · Hitachi · Hisense · TCL · Vizio · JVC · Mitsubishi · Vestel/Beko · Haier · Insignia · Sanyo · Funai · Magnavox · Emerson · Grundig · Xiaomi · Skyworth · AOC · Coocaa · Realme · Sceptre · Polaroid · Changhong · Medion · Loewe · Onida · Zenith · Element · Seiki · Westinghouse · Sylvania · Pioneer · RCA · Orion · BPL · Videocon · Micromax · Lloyd · Intex · Vu · Sansui

</details>

<details>
<summary><b>Проекторы (35 брендов)</b></summary>

BenQ · Epson · Optoma · ViewSonic · Acer · Infocus · NEC · Panasonic · Sony VPL · Casio · Sanyo · Mitsubishi · Hitachi · Dell · Ricoh · Vivitek · LG Minibeam · XGIMI · JmGo · Anker Nebula · Asus · Sharp PJ · Kodak · Formovie · Dangbei · Runco · Eiki · JVC Projector · Digital Projection · Proxima · Boxlight · Dukane · BOE · Barco Projector · Christie Projector

</details>

<details>
<summary><b>Интерактивные доски (22 бренда)</b></summary>

Barco · Christie · Canon · SMART Board · Promethean · NexTouch · Newline · ViewSonic IFP · BenQ Board · Clevertouch · Maxhub · Hikvision · Legamaster · IQTouch · Dahua · DTEN · Itatouch · Planar · Leyard · Absen · Optoma Board · ELO

</details>

---

## 🚀 Прошивка через браузер

PlatformIO не нужен. Прошей Скидди прямо из браузера:

👉 **[skiddysflasher](https://labubuahhginger.github.io/skiddysflasher)**

Работает в Chrome/Edge через Web Serial API. Просто подключи ESP32-C3 и нажми Flash.

---

## 🛠️ Собрать локально

Требуется [PlatformIO](https://platformio.org/).

```bash
# Клонировать
git clone https://github.com/labubuahhginger/SkidBGone.git
cd SkidBGone

# Собрать
pio run

# Прошить
pio run -t upload

# Смотреть как Скидди работает
pio device monitor
```

---

## ▶️ Использование

1. Прошей прошивку
2. Нажми **BOOT**
3. LED **загорается** — Скидди выпущен на волю
4. LED **гаснет** — Скидди закончил
5. Открой Serial Monitor на `115200` бод для полного лога

---

## 📁 Структура проекта

```
SkidBGone/
├── include/
│   ├── tvs.h                 # БД IR-кодов телевизоров
│   ├── projectors.h          # БД IR-кодов проекторов
│   ├── smartboards.h         # БД IR-кодов интерактивных досок
│   └── utils.h               # Макрос динамического извлечения имён
├── src/
│   └── main.cpp              # Раннер — здесь живёт Скидди
├── .github/
│   └── workflows/
│       └── build.yml         # CI — собирает и публикует firmware.bin
├── platformio.ini
├── README.md                 # English
└── README_RUS.md             # Русский
```

---

## ⚠️ Отказ от ответственности

Этот проект создан **в образовательных целях** и **только для своих устройств**.  
Не выпускай Скидди в публичных местах. У него нет тормозов.

---

## 📜 Лицензия

MIT — Скидди свободен. Используй с умом.