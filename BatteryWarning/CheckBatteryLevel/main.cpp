#include <iostream>
#include <string>
#include "Windows.h"
#include <fstream>
using namespace std;

bool checkAlreadyExists(LPCSTR value){

    HKEY checkKey;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToStartUp(LPCSTR value){

    HKEY newKey;
    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    LONG result = RegSetValueEx(newKey, value, 0, REG_SZ, (LPBYTE)filePath, sizeof(filePath));
    RegCloseKey(newKey);

    if(result != ERROR_SUCCESS){
        MessageBox(nullptr, "Could not add to startup", "Error", MB_ICONERROR);
        exit(1);
    }
}

int main() {

    ShowWindow(GetConsoleWindow(), SW_HIDE);
    SYSTEM_POWER_STATUS status;                                 // note not LPSYSTEM_POWER_STATUS
    LPCSTR value = "BatteryWarning";

    ifstream info;
    string path, max;

    int life, i = 0;

    if(checkAlreadyExists(value) == 0){
        addToStartUp(value);
    }

    info.open("info.txt");

    if(info.fail()){
        MessageBox(nullptr, "info.txt did not open", "Error", MB_ICONERROR);
        exit(1);
    }

    getline(info, path);
    getline(info, max);
    info.close();

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;

        if(life >= stoi(max) && status.ACLineStatus == 1){
            if(i < 10){
                ShellExecute(nullptr, "open", path.c_str(), to_string(life).c_str(), nullptr, SW_SHOWDEFAULT);
                i++;
                Sleep(60000);
            }
        }else{
            i = 0;
        }

        Sleep(60000);
    }
}
