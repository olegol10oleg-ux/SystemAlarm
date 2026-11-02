#include "SystemAlarm.h"
#include "Sensor.h"
#include <iostream>

AlarmSystem::AlarmSystem(const std::string& locationName, int code)
    : location(locationName), pinCode(code), isArmed(false), isAlarmActive(false)
{

}

bool AlarmSystem::arm(int inputCode)
{
    if (inputCode == pinCode)
    {
        isArmed = true;

        std::cout << "AlarmSystem Success: " << location << " On guard! " << std::endl;
        return true;
    }
    std::cout << "AlarmSystem ERROR: Incorrect pin! " << std::endl;
    return false;
}

bool AlarmSystem::disarm(int inputCode)
{
    if (inputCode == pinCode)
    {
        isArmed = false;
        isAlarmActive = false;

        std::cout << "AlarmSystem Success: " << location << " Removed guard!" << std::endl;
        return true;
    }
    std::cout << "AlarmSystem ERROR: Incorrect pin!" << std::endl;
    return false;
}

void AlarmSystem::printStatus() const
{
    std::cout << "----------------------" << std::endl;
    std::cout << " Location: " << location << std::endl;
    std::cout << "State guard: ";

    if (isArmed)
    {
        std::cout << " On guard " << std::endl;
    }
    else
    {
        std::cout << " Remove guard " << std::endl;
    }
    std::cout << "Alarm: ";

    if (isAlarmActive)
    {
        std::cout << "ACTIVEEEE!" << std::endl;
    }
    else
    {
        std::cout << "Switch off" << std::endl;
    }

    std::cout << "----------------------" << std::endl;
}


void AlarmSystem::checkSensor(const Sensor& sensor)
{
    std::cout << "-> Check the sensor staty by system " << std::endl;

    if (sensor.isAlert())
    {
        if (isArmed)
        {
            isAlarmActive = true;
            std::cout << " Alarm was triggered " << location << "!" << std::endl;
        }
        else
        {
            std::cout << " Sensor triggered " << std::endl;
        }
    }
    else
    {
        std::cout << " Sensor normal " << std::endl;
    }
}