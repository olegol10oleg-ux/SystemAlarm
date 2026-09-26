#ifndef ALARM_SYSTEM_H
#define ALARM_SYSTEM_H

#include <string>

class AlarmSystem
{
public:
    AlarmSystem(const std::string& location, uint64_t securityCode);

    bool arm();
    bool disarm();
    void printStatus();

private:
    std::string location;
    int pinCode;
    bool isArmed;
};

#endif