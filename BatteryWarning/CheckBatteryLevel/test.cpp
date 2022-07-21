#include <iostream>
#include <string>
#include "Windows.h"
#include <fstream>
using namespace std;




int main() {

    SYSTEM_POWER_STATUS status;

    ifstream info;
    string path;

    LPCSTR life;
    int i = 0;

    info.open("info.txt");

    if(info.fail()){
        MessageBox(nullptr, "info.txt did not open", "Error", MB_ICONHAND);
        exit(1);
    }

    getline(info, path);
    info.close();



        GetSystemPowerStatus(&status);
        life = to_string(status.BatteryLifePercent).c_str();


        ShellExecute(nullptr, "open", path.c_str(), life, nullptr, SW_SHOWDEFAULT);

}
