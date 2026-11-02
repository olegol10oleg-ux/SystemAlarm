#include "DoorSensor.h"
#include <iostream>

DoorSensor::DoorSensor(int battery) : Sensor("Door Sensor", battery) {}

void DoorSensor::detect()
{
    std::cout << "Door opened!" << std::endl;
    trigger();
}
