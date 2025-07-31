# picoFreeRTOS-template

## Overview
This template helps you get started quickly with FreeRTOS on RP2040-based boards such as the Raspberry Pi Pico.  
It builds atop the official Pico SDK and integrates FreeRTOS as a submodule.

## Prerequisites

- **CMake** (≥ 3.13 recommended)  
- **GNU Make** (or Ninja) or another build tool compatible with your platform  
- **RP2040 Raspberry Pi Pico SDK**  
- **A Pico-compatible board**

---

## Getting Started

### 1. Clone the repository (with submodules)

```bash
git clone --recurse-submodules <https://github.com/VishnuMukund24/picoFreeRTOS-template.git>
cd picoFreeRTOS‑template
```

### 2. Build the project

```bash
mkdir build && cd build
cmake ..
make
```

### 3. Deploy to your Pico

- Plug in your Pico while holding the BOOTSEL button (it appears as USB mass storage).
- Copy the .uf2 file to the drive.
- The board resets and begins running immediately.

## Contributing

Contributions and feedback are welcome!
Please open an issue or submit a pull request for fixes, enhancements, or documentation improvements.
