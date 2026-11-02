#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensor.h"

class MotionSensor : public Sensor
{
public:
    explicit MotionSensor(int battery);
    void detect() override;
};
#endif
