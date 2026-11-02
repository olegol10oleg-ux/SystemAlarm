#include "SystemAlarm.h"
#include "MotionSensor.h"
#include "DoorSensor.h"
#include <array>
#include <functional>

int main()
{
    AlarmSystem officeAlarm("Office", 5588);
    MotionSensor motionSensor(85);
    DoorSensor doorSensor(95);
    const std::array<std::reference_wrapper<Sensor>, 2> sensors{motionSensor, doorSensor};
    officeAlarm.printStatus();
    for (const Sensor& sensor : sensors)
    {
        sensor.printInfo();
        officeAlarm.checkSensor(sensor);
    }
    officeAlarm.arm(1111);
    if (!officeAlarm.arm(5588))
        return 1;
    for (Sensor& sensor : sensors)
    {
        sensor.detect();
        officeAlarm.checkSensor(sensor);
    }
    officeAlarm.printStatus();
    officeAlarm.disarm(1111);
    if (!officeAlarm.disarm(5588))
        return 1;
    for (Sensor& sensor : sensors)
        sensor.reset();
    officeAlarm.printStatus();
}
