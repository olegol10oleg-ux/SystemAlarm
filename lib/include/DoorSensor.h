#ifndef DOORSENSOR_H
#define DOORSENSOR_H
#include "Sensor.h"

class DoorSensor : public Sensor
{
public:
    explicit DoorSensor(int battery);
    void detect() override;
};
#endif
