#include <iostream>
#include <string>
#include "Windows.h"

using namespace std;

int main() {

	SYSTEM_POWER_STATUS status; // note not LPSYSTEM_POWER_STATUS

    int life;
    int BTime;

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;
        BTime = status.BatteryLifeTime;

        if(life > 90 && status.ACLineStatus == 1){
            ShellExecute(NULL, "open", "C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\MessageBox.vbs", NULL, NULL, SW_SHOWDEFAULT);
            Sleep(60000);
        }

        Sleep(60000);

    }
}
