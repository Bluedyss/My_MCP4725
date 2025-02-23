#include "My_MCP4725.h"

My_MCP4725::My_MCP4725(uint8_t address, TwoWire *wire) {
    _address = address;
    _wire = wire;
}

void My_MCP4725::begin() {
    _wire->begin();
}

void My_MCP4725::setVoltage(uint16_t value) {
    _wire->beginTransmission(_address);
    _wire->write((value >> 8) & 0x0F);
    _wire->write(value & 0xFF);
    _wire->endTransmission();
}

uint8_t My_MCP4725::address() {
    return _address;
}

void My_MCP4725::address(uint8_t newAddress) {
    _address = newAddress;
}