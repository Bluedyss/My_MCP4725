# My_MCP4725 Library

This library allows control of the MCP4725 DAC using the standard Wire library.

## 📌 Features:
- **Supports single and dual I²C buses** (Wire + TwoWire)
- **12-bit output voltage control** (0-4095)
- **Ability to change the DAC address at runtime**

## 📦 Installation:
1. Download the ZIP file of the library.
2. Extract it and place the `My_MCP4725` folder into `Arduino/libraries/`.

## 📋 Usage:
```cpp
#include <Wire.h>
#include "My_MCP4725.h"

My_MCP4725 dac(0x60);

void setup() {
    Wire.begin();
    dac.begin();
    dac.address(0x62); // Change the DAC address
}

void loop() {
    dac.setVoltage(2048); // Sets the voltage to half of the range
}
