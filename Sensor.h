#ifndef SENSOR_H
#define SENSOR_H

#include <string>

class Sensor
{
public:
    Sensor(const std::string& sensorType, int battery);

    void trigger();
    void reset();
    void printInfo() const;

    bool isAlert() const;

private:
    std::string type;
    int batteryLevel;

    bool isTriggered;
};

#endif