#ifndef ALARM_SYSTEM_H
#define ALARM_SYSTEM_H

#include <string>

class Sensor;


class AlarmSystem
{
public:
    AlarmSystem(const std::string& locationName, int code);

    void printStatus() const;
    void checkSensor(const Sensor& sensor);

    bool arm(int inputCode);
    bool disarm(int inputCode);

private:
    std::string location;
    int pinCode;


    bool isArmed;
    bool isAlarmActive;
};

#endif