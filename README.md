# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker utilizing the Nordic nRF52840 architecture to broadcast real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols.

## 🚀 Live Interactive Simulator

[Launch Live Wokwi Cadence Simulator](https://wokwi.com)

## 📊 Bill of Materials (BOM) & Cost Estimation

| Part Name | Quantity | Purpose | Sourcing Link | Estimated Cost |
| :--- | :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [AliExpress Sourcing](https://aliexpress.com) | ~$10.00 |
| KY-003 Hall Effect Sensor Module | 1 | Magnetic proximity sensor to track pedal rotations. | [AliExpress Sourcing](https://aliexpress.com) | ~$2.50 |
| Neodymium Magnets & CR2032 Holder | 1 each | Crank magnet and lightweight power supply infrastructure. | [AliExpress Sourcing](https://aliexpress.com) | ~$7.00 |
| **Total Estimated Budget** | | | | **~$19.50** |

## 🛠️ System Architecture & Hardware Connections

* **Pin Mapping:** Hall Effect sensor VCC connects to 3V3, GND connects to system ground, and Signal OUT connects to Digital Pin 2 (Hardware Interrupt).
* **Source Layout Configuration:** Complete software wiring paths and board layout mappings are actively tracked under the tracking schematic file path `/hardware/circuit.json`.
* **ChromeOS Workflow:** Circuit nodes simulated via Wokwi browser stacks and compiled using the cloud-based Arduino Web IDE platform.

---
*Built as a high school engineering project funded through Hack Club Forge.*
