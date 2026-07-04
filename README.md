# embedded-esp32-temperature-humidity-monitor

# ESP32 Temperature and Humidity Monitor

A simple embedded systems project built using an ESP32, SSD1306 OLED display, and DHT11 sensor. The project reads temperature and humidity data from the sensor and displays the values on a 0.96" OLED display.

This project was developed as a practice exercise to learn sensor interfacing, OLED graphics, and C++ library usage using the PlatformIO development environment.

---

## Features

- Read temperature from a DHT11 sensor
- Read relative humidity from a DHT11 sensor
- Display sensor readings on a 128×64 SSD1306 OLED
- Serial Monitor output for debugging
- Developed using PlatformIO and C++

---

## Hardware Used

- ESP32 Development Board
- DHT11 Temperature & Humidity Sensor
- 0.96" SSD1306 OLED Display (I2C)
- Breadboard
- Jumper Wires

---

## Software

- PlatformIO
- Visual Studio Code
- Arduino Framework
- Adafruit SSD1306 Library
- Adafruit GFX Library
- Adafruit DHT Sensor Library

---

## Pin Connections

| ESP32   | Component  |
|---------|------------|
| GPIO 4  | DHT11 DATA |
| 3.3V    | DHT11 VCC  |
| GND     | DHT11 GND  |
| GPIO 21 | OLED SDA   |
| GPIO 22 | OLED SCL   |
| 3.3V    | OLED VCC   |
| GND     | OLED GND   |

---

## Project Structure

---
```
.
├── docs/
├── include/
├── lib/
├── src/
│   └── main.cpp
├── test/
├── platformio.ini
├── README.md
└── .gitignore
```

---

## Learning Objectives

This project helped me practice:

- ESP32 programming
- Embedded C++
- Sensor interfacing
- I2C communication
- OLED graphics
- Using third-party libraries
- PlatformIO workflow
- Git & GitHub

---