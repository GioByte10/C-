#include <iostream>
#include <windows.h>
#include <chrono>
#pragma comment(lib, "winmm.lib")

std::string replaceString(std::string subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}

std::string getDirectoryPath(const TCHAR filePath[], const int steps){

    int i = lstrlen(filePath);
    std::string directoryPath;

    for(int step = 0; step < steps; step++) {
        for (; i >= 0; i--)
            if (filePath[i] == '\\')
                break;
        i--;
    }

    i++;

    for(int j = 0; j < i; j++){
        directoryPath += filePath[j];

        if(filePath[j] == '\\')
            directoryPath += R"(\)";
    }

    return replaceString(directoryPath, R"(\\)", R"(\)");
}

std::string patchSpaces(const std::string &line, const std::string &r){

    std::string newLine;

    for(char c : line){
        if(c == ' ')
            newLine += r;
        else
            newLine += c;
    }

    return newLine;
}

int main(int argc, char *argv[]) {

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    std::string toastNotificationPath = getDirectoryPath(filePath, 1) + R"(\dist\ToastNotification.exe)";
    std::string iconPath = std::string(getDirectoryPath(filePath, 1)) + R"(\dist\alarmIcon3.png)";

    if(argc == 2) {

        int min = atoi(argv[1]);

        if(min == -1) {
            std::string param = "Abort All_SPC_alarms_SPC_have_SPC_been_SPC_canceled_SPC_ " + patchSpaces(iconPath, "_SPC_");
            ShellExecuteA(nullptr, "open", toastNotificationPath.c_str(), param.c_str(),nullptr, SW_HIDE);
            WinExec("taskkill /f /im alm.exe", SW_HIDE);
            return 0;
        }

        auto start = std::chrono::high_resolution_clock::now();
        auto now = std::chrono::high_resolution_clock::now();

        std::string param = "Success Alarm_SPC_is_SPC_set_SPC_for_SPC_" + std::string(argv[1]) + "_SPC_minutes " + patchSpaces(iconPath, "_SPC_");
        ShellExecuteA(nullptr, "open", toastNotificationPath.c_str(), param.c_str(),nullptr, SW_HIDE);

        while(std::chrono::duration_cast<std::chrono::seconds>(now - start).count() < min * 60){
            now = std::chrono::high_resolution_clock::now();
            Sleep(3000);
        }

        for(int i = 0; i < 2; i++)
            PlaySound(TEXT("C:\\Windows\\Media\\Alarm01.wav"), nullptr, SND_FILENAME);

        MessageBoxA(nullptr, "Alarm is over", "Alarm", MB_OK | MB_ICONINFORMATION);

    }else {
        std::string param = "Error There_SPC_was_SPC_a_SPC_problem " + patchSpaces(iconPath, "_SPC_");
        ShellExecuteA(nullptr, "open", toastNotificationPath.c_str(), param.c_str(),nullptr, SW_HIDE);
    }

    return 0;
}
