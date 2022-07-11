#include <iostream>
#include <string>
#include "Windows.h"
#include <fstream>
using namespace std;

int main() {

    ShowWindow(GetConsoleWindow(), SW_HIDE);
    SYSTEM_POWER_STATUS status;         // note not LPSYSTEM_POWER_STATUS

    ifstream info;
    string path;

    int life;
    int i = 0;

    info.open("info.txt");

    if(info.fail()){
        MessageBox(nullptr, "info.txt did not open", "Error", MB_ICONHAND);
        exit(1);
    }

    getline(info, path);
    info.close();

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;

        if(life >= 85 && status.ACLineStatus == 1){
            if(i < 10){
                ShellExecute(nullptr, "open", path.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
                i++;
                Sleep(60000);
            }
        }else{
            i = 0;
        }

        Sleep(60000);
    }
}
