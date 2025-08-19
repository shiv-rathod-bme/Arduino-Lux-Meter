# Arduino Lux Meter

A compact and efficient lux meter built with an Arduino Nano, BH1750 sensor, and a 16x2 I2C LCD display. Demonstrates clean hardware integration and I2C communication.

## 🚀 Features
- Measures ambient light intensity (0 - 65535 Lux).
- Output displayed on a 16x2 LCD via an I2C module.
- Minimal wiring using the I2C bus.

## 📦 Hardware
- **Microcontroller:** Arduino Nano
- **Sensor:** BH1750 (GY-302 module)
- **Display:** 16x2 LCD with I2C backpack

## 🔌 Wiring
| Arduino Nano | BH1750 | LCD I2C |
|:------------:|:------:|:-------:|
| 5V           | VCC    | VCC     |
| GND          | GND    | GND     |
| A4 (SDA)     | SDA    | SDA     |
| A5 (SCL)     | SCL    | SCL     |

*Ensure the LCD's I2C address is set correctly in the code (default: `0x27`).*

## ⚡ Getting Started
1.  **Install Libraries:** Use the Arduino Library Manager to install `BH1750` by Christopher Laws and `LiquidCrystal I2C` by Frank de Brabander.
2.  **Upload Code:** Compile and upload the `lux_meter_bh1750.ino` sketch to your board.
3.  **Power Up:** The LCD will display the real-time illuminance in Lux.

