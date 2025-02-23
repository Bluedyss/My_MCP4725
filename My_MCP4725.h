#ifndef MY_MCP4725_H
#define MY_MCP4725_H

#include <Arduino.h>
#include <Wire.h>

class My_MCP4725 {
public:
    My_MCP4725(uint8_t address, TwoWire *wire = &Wire);
    void begin();
    void setVoltage(uint16_t value);
    uint8_t address();
    void address(uint8_t newAddress);

private:
    uint8_t _address;
    TwoWire *_wire;
};

#endif