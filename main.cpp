#include <iostream>
#include "SystemAlarm.h"
#include "Sensor.h"

int main()
{

    AlarmSystem houseAlarm("Office", 5588);
    Sensor motionSensor("Motion Sensor", 85);


    std::cout << "Initial Objects Status" << std::endl;
    houseAlarm.printStatus();
    motionSensor.printInfo();


    int inputPin = 0;

    bool isArmedSuccessfully = false;

    std::cout << std::endl;
    std::cout << " Arming the System " << std::endl;

    
    while (!isArmedSuccessfully)
    {
        std::cout << "Enter PIN code to ARM the system: ";
        std::cin >> inputPin;
        isArmedSuccessfully = houseAlarm.arm(inputPin);
    }

    std::cout << std::endl;
    std::cout << " Simulating Sensor Event " << std::endl;
    motionSensor.trigger();
    houseAlarm.checkSensor(motionSensor);
    houseAlarm.printStatus();

    bool isDisarmedSuccessfully = false;

    std::cout << " Disarming the System " << std::endl;


    while (!isDisarmedSuccessfully)
    {
        std::cout << "Enter PIN code to DISARM the system: ";
        std::cin >> inputPin;
        isDisarmedSuccessfully = houseAlarm.disarm(inputPin);
    }

    motionSensor.reset();
    houseAlarm.printStatus();

    return 0;
}