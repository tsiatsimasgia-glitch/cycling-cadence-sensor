# Smart Dual-Band (ANT+/BLE) Cycling Cadence Sensor

An open-source, ultra-lightweight cycling cadence tracker utilizing the Nordic nRF52840 architecture to broadcast real-time RPM data simultaneously over Bluetooth Low Energy (BLE) and ANT+ protocols.

## 🚀 Live Interactive Simulator

[Launch Live Wokwi Cadence Simulator](https://wokwi.com/projects/479314929800269825)

## 📊 Bill of Materials (BOM) & Budget Sourcing (Skroutz)

| Part Name | Quantity | Purpose | Sourcing Link | Estimated Cost |
| :--- | :--- | :--- | :--- | :--- |
| Seeed Studio XIAO nRF52840 | 1 | Core microcontroller with native BLE and ANT+ radio support. | [Skroutz Marketplace](https://www.skroutz.gr/s/56684970/Seeed-Studio-Xiao-Nrf52840.html) | €21 |
| KY-003 Digital Hall Effect Sensor | 1 | High-precision magnetic sensor to register pedal rotations. | [Skroutz Marketplace](https://www.skroutz.gr/s/31876151/Optum-Magnitikos-Aisthitiras-KY-003.html) | €2 |
| Battery Holder 1xCR2032 | 1 | Ultra-lightweight 3V power delivery matrix for the bike crank. | [Skroutz Marketplace](https://www.skroutz.gr/s/30290613/Goobay-Vasi-Mpatarias-56617.html?product_id=316269338&sponsored=listing) | €5 |
| Battery | 1 | Ultra-lightweight 3V power battery . | [Skroutz Marketplace](https://www.skroutz.gr/s/64628022/battery-set-2x-cr2032-duracell-lithium-3v-225mah-20x3-2mm.html) | €4 |
|  neodymium magnets | 1 | The magnets that will tell the magnetic sensor to capture a full cycle of the cranks | [Skroutz Marketplace](https://www.skroutz.gr/s/64506385/magnitis-neodymiou-strogylos-12x3mm-set-10-temachia-cresman-12996.html) | €3 |
| **Total Project Budget (including shipping)** | | | | **~€45 ** |

## 🛠️ System Architecture & Hardware Connections

* **Pin Mapping:** Hall Effect sensor VCC connects to 3V3, GND connects to system ground, and Signal OUT connects to Digital Pin 2 (Hardware Interrupt).
* **Source Layout Configuration:** Complete software wiring paths and board layout mappings are actively tracked under the tracking schematic file path `/hardware/circuit.json`.
* **ChromeOS Workflow:** Circuit nodes simulated via Wokwi browser stacks and compiled using the cloud-based Arduino Web IDE platform.
  <img width="1917" height="935" alt="Screenshot 2026-10-30 4 43 23 PM" src="https://github.com/user-attachments/assets/ee3e269b-c258-4e8b-9516-6d8af6b44315" />

<img width="225" height="225" alt="images" src="https://github.com/user-attachments/assets/aeb7b5d2-1807-4cc3-bcaf-73d19fbf4ecd" />
<img width="927" height="580" alt="Screenshot 2026-11-02 4 39 37 PM" src="https://github.com/user-attachments/assets/2a2478b8-758c-46bf-aa8b-f6003b25897d" />

---
*Built as a high school engineering project funded through Hack Club Forge.*
