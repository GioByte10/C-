#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main() {

    SYSTEM_POWER_STATUS spsPwr;
    bool full = false;

    if(GetSystemPowerStatus(&spsPwr)) {
        printf("AC Status: %.0f\n", static_cast<double>(spsPwr.ACLineStatus));
        printf("Battery Status: %.0f\n", static_cast<double>(spsPwr.BatteryFlag));
        printf("Battery %: %.0f\n", static_cast<double>(spsPwr.BatteryLifePercent));

    }

    return 0;

}
