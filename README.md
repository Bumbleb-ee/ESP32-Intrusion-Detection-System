# ESP32-Intrusion-Detection-System
IoT based motion detection system using ESP32 and Telegram alerts
# ESP32 Intrusion Detection System 🚨

An IoT-based motion detection system built with ESP32 
that sends real-time alerts via Telegram when motion is detected.

## Features
- Real-time motion detection using PIR sensor
- Instant Telegram notifications
- WiFi connectivity
- 5 second cooldown between alerts

## Components Used
- ESP32 Dev Module
- PIR Motion Sensor (HC-SR501)
- Jumper Wires

## Libraries Used
- UniversalTelegramBot by Brian Lough
- ArduinoJson by Benoit Blanchon
- WiFi (built-in ESP32)

## Circuit Connections
| PIR Pin | ESP32 Pin |
|---------|-----------|
| VCC     | VIN       |
| GND     | GND       |
| OUT     | GPIO 13   |

## Setup Instructions
1. Install Arduino IDE
2. Add ESP32 board support
3. Install required libraries
4. Clone this repository
5. Fill in your WiFi and Telegram credentials
6. Upload to ESP32

## How It Works
1. PIR sensor detects motion
2. ESP32 reads the signal
3. ESP32 connects to Telegram API via WiFi
4. Telegram sends alert to your phone

## Author
Your Name — Information Technology Department
```

5. Click **Commit changes** ✅

---

## ✅ Your Repository Should Have:
```
ESP32-Intrusion-Detection-System/
├── README.md          ← Project description
└── intrusion_detection.ino  ← Your code
```

---

## 🌟 Make it Look Even Better

After creating repo:
1. Go to repository page
2. Click ⚙️ **Settings gear** (next to About)
3. Add **topics:**
```
esp32, iot, telegram, motion-detection, arduino, security
```
These help employers find your project!

---

## 📌 Add to Your Resume Like This:
```
Projects:
ESP32 Intrusion Detection System
→ github.com/yourusername/ESP32-Intrusion-Detection-System
→ Built IoT security system using ESP32, PIR sensor
  and Telegram Bot API for real time alerts
