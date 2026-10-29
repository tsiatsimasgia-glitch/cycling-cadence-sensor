# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker built around the Nordic nRF52840 system architecture, broadcasting real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols [Seeed Studio Wiki](https://seeedstudio.com).

## Bill of Materials (BOM)

| Part Name | Quantity | Purpose | Sourcing Link |
| :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [Seeed Studio Wiki](https://seeedstudio.com) |
| KY-003 Hall Effect Sensor Module | 1 | Magnetic proximity sensor to track pedal rotations. | [Sensor Specifications](https://seeedstudio.com) |
| Neodymium Magnets & CR2032 Holder | 1 each | Crank magnet and lightweight power supply. | [Hardware Sourcing](https://seeedstudio.com) |

## System Architecture & Development

- **Pin Connections:** Hall Effect VCC to 3V3, GND to GND, and Signal OUT to Digital Pin D1 (Interrupt).
- **Repository Structure:** Includes `/firmware` for C++ scripts, `/hardware/cad` for 3D enclosures, and `/hardware/pcb` for schematics.
- **ChromeOS Workflow:** Uses Wokwi for simulation and Arduino Cloud Web IDE for compilation and flashing.

---
*Built as a high school engineering project funded through Hack Club Forge.*
