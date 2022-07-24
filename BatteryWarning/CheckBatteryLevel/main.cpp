#include <iostream>
#include <string>
#include "Windows.h"
#include <fstream>
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
using namespace std;

bool checkAlreadyExists(LPCSTR value){

    HKEY checkKey;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToStartUp(LPCSTR value, TCHAR *filePath){

    HKEY newKey;

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

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    ifstream info;
    string infoPath, notificationPath, max;

    int life, i;

    if(checkAlreadyExists(value) == 0){
        addToStartUp(value, filePath);
    }

    for(i = lstrlen(filePath); i >= 0; i--){
        if(filePath[i] == '\\'){
            break;
        }
    }

    for(int j = 0; j < i; j++){
        infoPath += filePath[j];

        if(filePath[j] == '\\')
            infoPath += '\\';
    }

    i = 0;

    infoPath += "\\info.txt";
    info.open(infoPath);


    if(info.fail()){
        MessageBox(nullptr, "info.txt did not open", "Error", MB_ICONERROR);
        exit(1);
    }

    getline(info, notificationPath);
    getline(info, max);
    info.close();

    while(true){

        GetSystemPowerStatus(&status);
        life = status.BatteryLifePercent;

        if(life >= stoi(max) && status.ACLineStatus == 1){
            if(i < 10){
                ShellExecute(nullptr, "open", notificationPath.c_str(), to_string(life).c_str(), nullptr, SW_SHOWDEFAULT);
                i++;
                Sleep(60000);
            }
        }else{
            i = 0;
        }

        Sleep(60000);
    }
}

#pragma clang diagnostic pop