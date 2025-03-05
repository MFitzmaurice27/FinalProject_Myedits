//=====[Libraries]=============================================================

//#include "safe_entry_system.h"
#include "servo.h"
#include "distance_sensor.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
//    safe_entry_system_init();
    while (true) {
//        safe_entry_system_update();
        printToMon();

    }
}
