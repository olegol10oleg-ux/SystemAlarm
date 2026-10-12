#include "Sensor.h"
#include <iostream>

Sensor::Sensor(const std::string& sensorType, int battery)
    : type(sensorType), batteryLevel(battery), isTriggered(false)
{

}

void Sensor::trigger()
{
    isTriggered = true;
    std::cout << "Sensor: " << type << "Perform! " << std::endl;
}

void Sensor::reset()
{
    isTriggered = false;
    std::cout << "State of the sensor: " << type << " throw down!" << std::endl;
}


bool Sensor::isAlert() const
{
    return isTriggered;
}

void Sensor::printInfo() const
{
    std::cout << "Sensor type: " << type << " Battery: " << batteryLevel << "%" << std::endl;
}