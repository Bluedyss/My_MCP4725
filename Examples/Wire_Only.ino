#include <Wire.h>
#include "My_MCP4725.h"

My_MCP4725 dac1(0x60);

void setup() {
    Serial.begin(115200);
    Wire.begin();
    dac1.begin();

    Serial.print("Původní adresa DAC1: 0x");
    Serial.println(dac1.address(), HEX);
    
    dac1.address(0x62);

    Serial.print("Nová adresa DAC1: 0x");
    Serial.println(dac1.address(), HEX);
}

void loop() {
    for (int i = 0; i <= 4095; i += 100) {
        dac1.setVoltage(i);
        delay(50);
    }
}