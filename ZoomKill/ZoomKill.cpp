#include <cstdlib>
#include <chrono>
#include <thread>
#include <iostream>
#include <windows.h>
using namespace std;

TCHAR* getFilePath(){
    static TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    return filePath;
}

int main() {
    using namespace std::chrono;
    int m = 0;

    TCHAR *exePath = getFilePath();
    string vbsPath;

    for(int i = 0; i < lstrlen(exePath) - 12; i++){
        vbsPath += exePath[i];

        if(exePath[i] == '\\')
            vbsPath += '\\';
    }

    vbsPath += "MessageBox.vbs";

    cout << "Kill zoom in ___ minutes:";
    cin >> m;

    ShowWindow(GetConsoleWindow(), SW_HIDE);
    
    if(m > 5) {
        this_thread::sleep_for(minutes(m - 5));
        ShellExecute(nullptr, "open", vbsPath.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
        this_thread::sleep_for(minutes(5));

    }else {
        this_thread::sleep_for(minutes(m));

    }

    system("taskkill /IM zoom.exe /F");
    return 0;
}
