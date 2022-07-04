#include <iostream>
#include <string>
#include "Windows.h"

using namespace std;

int main() {

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    SYSTEM_POWER_STATUS status; // note not LPSYSTEM_POWER_STATUS

    int life;
    int i = 0;

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;


        if(life >= 85 && status.ACLineStatus == 1){
            if(i < 10){
                ShellExecute(NULL, "open", "C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\MessageBox.vbs", NULL, NULL, SW_SHOWDEFAULT);
                i++;
                Sleep(60000);
            }
        }else{
            i = 0;
        }

        Sleep(60000);
    }
}
