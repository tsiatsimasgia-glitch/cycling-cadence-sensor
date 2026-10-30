# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker utilizing the Nordic nRF52840 architecture to broadcast real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols [Seeed Studio Wiki](https://seeedstudio.com).

## 🚀 Live Interactive Simulator

[Launch Live Wokwi Cadence Simulator](https://wokwi.com/projects/479314929800269825)

## 📊 Bill of Materials (BOM) & Budget Sourcing

| Part Name | Quantity | Purpose | Sourcing Link | Estimated Cost |
| :--- | :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [Nettop Store](https://nettop.gr/index.php/development-boards/esp/seeed-studio-xiao-nrf52840.html) | €8.40 |
| KY-003 Digital Hall Effect Sensor | 1 | High-precision magnetic sensor to register pedal rotations. | [Nettop Store](https://nettop.gr/) | €2.10 |
| Battery Holder 1xCR2032 | 1 | Ultra-lightweight 3V power delivery matrix for the bike crank. | [Nettop Store](https://nettop.gr/) | €0.70 |
| **Total Project Budget** | | | | **~€11.20** |

## 🛠️ System Architecture & Hardware Connections

* **Pin Mapping:** Hall Effect sensor VCC connects to 3V3, GND connects to system ground, and Signal OUT connects to Digital Pin 2 (Hardware Interrupt).
* **Source Layout Configuration:** Complete software wiring paths and board layout mappings are actively tracked under the tracking schematic file path `/hardware/circuit.json`.
* **ChromeOS Workflow:** Circuit nodes simulated via Wokwi browser stacks and compiled using the cloud-based Arduino Web IDE platform.

---
*Built as a high school engineering project funded through Hack Club Forge.*
