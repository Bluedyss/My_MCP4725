#include <Wire.h>
#include "My_MCP4725.h"

TwoWire I2C_2 = TwoWire(1);
My_MCP4725 dac2(0x61, &I2C_2);

void setup() {
    Serial.begin(115200);
    I2C_2.begin(4, 5);

    dac2.begin();

    Serial.print("Původní adresa DAC2: 0x");
    Serial.println(dac2.address(), HEX);

    dac2.address(0x63);

    Serial.print("Nová adresa DAC2: 0x");
    Serial.println(dac2.address(), HEX);
}

void loop() {
    for (int i = 0; i <= 4095; i += 100) {
        dac2.setVoltage(i);
        delay(50);
    }
}