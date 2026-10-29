# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker built around the Nordic nRF52840 system architecture. This device simultaneously broadcasts real-time pedal RPM data over Bluetooth Low Energy (BLE) and ANT+ protocols, allowing it to interface concurrently with mobile training software (like Zwift) and dedicated sports telemetry hardware (like Garmin watches).

##  System Architecture

- **Core Microcontroller:** Seeed Studio XIAO nRF52840
- **Telemetry Sensor:** KY-003 Digital Hall Effect Module
- **Trigger Element:** Neodymium Magnet Matrix (crank-mounted)
- **Power Configuration:** CR2032 3V Coin Cell Array

##  Repository Contents

- `/firmware` : Arduino C++ source code files for hardware pulse tracking and dual-protocol stack radio initialization.
- `/hardware` : Virtual pinout schematics and breadboard wiring diagrams created via Wokwi simulation profiles.

##  ChromeOS Development Framework

Because this project is built on a Chromebook environment, the entire compilation pipeline avoids heavy desktop software installations:
1. **Simulation Engine:** Hardware circuits and validation models are checked online via [Wokwi.com](https://wokwi.com).
2. **Compiler & Flashing:** Code deployment and firmware adjustments are managed live using the browser-based [Arduino Cloud Web IDE](https://arduino.cc).

---
*Built as a high school engineering project funded through Hack Club Forge.*
