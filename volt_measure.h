#ifndef VOLT_MEASURE_H
#define VOLT_MEASURE_H
#include <Arduino.h>

#include <Wire.h>
#include "DFRobot_INA219.h"

extern DFRobot_INA219_IIC     ina219;

extern float ina219Reading_mA;
extern float extMeterReading_mA;

void Voltage_Measure(void);

#endif

