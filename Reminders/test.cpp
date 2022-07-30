#include <iostream>
#include <windows.h>
#include <fstream>

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

    //ShowWindow(GetConsoleWindow(), SW_HIDE);
    LPCSTR value = "CReminders";
    std::ifstream info;
    std::string infoPath, line, lines;

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    int i;                              //------------------

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

    infoPath += "\\info.txt";
    info.open(infoPath);

    while(getline(info, line)){
        lines += line + '\n';
    }

    info.close();

    std::cout << lines.find("Message:") << std::endl;


    return 0;
}
