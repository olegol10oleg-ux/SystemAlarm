#include "SystemAlarm.h"
#include <iostream>

AlarmSystem::AlarmSystem(const std::string& locationName, uint64_t Code)
{
    location = locationName;
    pinCode = Code;
    isArmed = false;
}

bool AlarmSystem::arm()
{
    int inputCode = 0;
    std::cout << std::endl;
    std::cout << "Enter PIN " << location << ": ";
    std::cin >> inputCode;

    if (inputCode == pinCode)
    {
        isArmed = true;
        std::cout << " SUCCESS: " << location << " system is now ARMED!" << std::endl;
        return true;
    }
    else
    {
        std::cout << " ERROR: Wrong PIN code! Try again." << std::endl;
        return false;
    }
}

bool AlarmSystem::disarm()
{
    int inputCode = 0;
    std::cout << std::endl;
    std::cout << "Enter PIN " << location << ": ";
    std::cin >> inputCode;

    if (inputCode == pinCode)
    {
        isArmed = false;
        std::cout << " SUCCESS: " << location << " system is now DISARMED!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "ERROR: Wrong PIN code! Try again." << std::endl;
        return false;
    }
}

void AlarmSystem::printStatus()
{
    std::cout << "Location: " << location << " | Status: ";
    if (isArmed)
    {
        std::cout << "ARMED" << std::endl;
    }
    else
    {
        std::cout << "DISARMED" << std::endl;
    }
}