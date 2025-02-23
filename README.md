# My_MCP4725 Library

Tato knihovna umožňuje ovládání MCP4725 DAC pomocí standardní knihovny Wire.

## 📌 Funkce:
- **Podpora jednoho i dvou I²C sběrnic** (Wire + TwoWire)
- **Nastavení výstupního napětí** 12bitově (0-4095)
- **Možnost změnit adresu DAC za běhu**

## 📦 Instalace:
1. Stáhněte si ZIP soubor knihovny.
2. Rozbalte a umístěte složku `My_MCP4725` do `Arduino/libraries/`.

## 📋 Použití:
```cpp
#include <Wire.h>
#include "My_MCP4725.h"

My_MCP4725 dac(0x60);

void setup() {
    Wire.begin();
    dac.begin();
    dac.address(0x61); // Změna adresy DAC
}

void loop() {
    dac.setVoltage(2048); // Nastaví napětí na polovinu rozsahu
}
```
## 📂 Příklady:
- `Wire_Only.ino` – pouze Wire
- `TwoWire_Only.ino` – pouze TwoWire
- `Wire_and_TwoWire.ino` – kombinace obou

🎯 **Podporované desky:** ATmega328P (Arduino Uno, Nano) a další AVR.

---
📌 **Vytvořil:** @TvojeJméno
