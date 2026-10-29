# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker built around the Nordic nRF52840 system architecture, broadcasting real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols [Seeed Studio Wiki](https://seeedstudio.com).

![Project Render](cover.png)

## Bill of Materials (BOM)

| Part Name | Quantity | Purpose | Sourcing Link |
| :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [Seeed Studio Wiki](https://seeedstudio.com) |
| KY-003 Hall Effect Sensor Module | 1 | Magnetic proximity sensor to track pedal rotations. | [Sensor Specifications](https://seeedstudio.com) |
| Neodymium Magnets & CR2032 Holder | 1 each | Crank magnet and lightweight power supply. | [Hardware Sourcing](https://seeedstudio.com) |

## System Architecture & Hardware Connections

- **Pin Connections:** Hall Effect sensor VCC connects to 3V3, GND connects to system ground, and Signal OUT connects to Digital Pin D1 (Hardware Interrupt).
- **Source Layout Configuration:** Complete software wiring paths and board layout mappings are actively tracked under the tracking schematic file path `/hardware/circuit.json`.
- **ChromeOS Workflow:** Circuit nodes simulated via Wokwi browser stacks and compiled using the cloud-based Arduino Web IDE platform.

---
*Built as a high school engineering project funded through Hack Club Forge.*
<img width="225" height="225" alt="download (1)" src="https://github.com/user-attachments/assets/7677dbf4-09a0-493e-b5d6-ed2432e2b4d8" />
