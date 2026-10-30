# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker utilizing the Nordic nRF52840 architecture to broadcast real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols.

## 🚀 Live Interactive Simulator

[Launch Live Wokwi Cadence Simulator](https://wokwi.com)

## 📊 Bill of Materials (BOM) & Budget Sourcing (Skroutz)

| Part Name | Quantity | Purpose | Sourcing Link | Estimated Cost |
| :--- | :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [Skroutz Marketplace](https://www.skroutz.gr/s/56684970/Seeed-Studio-Xiao-Nrf52840.html) | €17.90 |
| KY-003 Digital Hall Effect Sensor | 1 | High-precision magnetic sensor to register pedal rotations. | [Skroutz Marketplace](https://www.skroutz.gr/s/31876151/Optum-Magnitikos-Aisthitiras-KY-003.html) | €1.40 |
| Battery Holder 1xCR2032 | 1 | Ultra-lightweight 3V power delivery matrix for the bike crank. | [Skroutz Marketplace](https://www.skroutz.gr/c/4750/mpatariothiki/f/1429104/CR2032.html) | €0.20 |
| **Total Project Budget** | | | | **~€19.50** |

## 🛠️ System Architecture & Hardware Connections

* **Pin Mapping:** Hall Effect sensor VCC connects to 3V3, GND connects to system ground, and Signal OUT connects to Digital Pin 2 (Hardware Interrupt).
* **Source Layout Configuration:** Complete software wiring paths and board layout mappings are actively tracked under the tracking schematic file path `/hardware/circuit.json`.
* **ChromeOS Workflow:** Circuit nodes simulated via Wokwi browser stacks and compiled using the cloud-based Arduino Web IDE platform.

---
*Built as a high school engineering project funded through Hack Club Forge.*
