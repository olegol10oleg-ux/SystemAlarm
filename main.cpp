#include "SystemAlarm.h"
#include <iostream>


int main()
{
    AlarmSystem house1("House", 5588);
    AlarmSystem house2("House 2", 3215);

    house1.printStatus();
    house2.printStatus();


    bool isHouse1Armed = false;
    while (isHouse1Armed == false)
    {
        isHouse1Armed = house1.arm();
    }


    bool isHouse2Armed = false;
    while (isHouse2Armed == false)
    {
        isHouse2Armed = house2.arm();
    }


    house1.printStatus();
    house2.printStatus();

    return 0;
}