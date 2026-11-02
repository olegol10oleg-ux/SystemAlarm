#include "MotionSensor.h"
#include <iostream>

MotionSensor::MotionSensor(int battery) : Sensor("Motion Sensor", battery) {}

void MotionSensor::detect()
{
    std::cout << "Motion detected!" << std::endl;
    trigger();
}
