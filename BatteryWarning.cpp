#include <iostream>
#include <string>
#include "Windows.h"

using namespace std;

int main() {

	SYSTEM_POWER_STATUS status; // note not LPSYSTEM_POWER_STATUS

    int life;

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;

        cout << life << endl;
        Sleep(60000);

    }
}
