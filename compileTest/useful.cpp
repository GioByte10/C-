/*  https://github.com/GioByte10/CReminders */

#include <windows.h>
#include <iostream>
#include <list>
#include <fstream>
#include <thread>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"


bool checkAlreadyExists(const LPCSTR value){

    HKEY checkKey;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToRegistry(const LPCSTR value, const TCHAR filePath[]){

    HKEY newKey;

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    LONG result = RegSetValueEx(newKey, value, 0, REG_SZ, (LPBYTE)filePath, lstrlen(filePath));
    RegCloseKey(newKey);

    if(result != ERROR_SUCCESS){
        ShellExecuteA(nullptr, "open", "https://github.com/GioByte10/CReminders/wiki", nullptr, nullptr, SW_SHOWMAXIMIZED);
        MessageBox(nullptr, "Could not add to startup", "CReminders Error 0x00", MB_ICONERROR);
        exit(1);
    }
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

std::string intDayToStringDayEn(const int intDay){

    if(intDay == 1)
        return "monday";

    else if(intDay == 2)
        return "tuesday";

    else if(intDay == 3)
        return "wednesday";

    else if(intDay == 4)
        return "thursday";

    else if(intDay == 5)
        return "friday";

    else if(intDay == 6)
        return "saturday";

    else if(intDay == 0)
        return "sunday";

    return "";
}

int getCurrentTime(const std::string &arg, time_t now, tm *ltm){

    now = time(nullptr);
    localtime(&now);

    if(arg == "sec")
        return ltm -> tm_sec;

    else if(arg == "min")
        return ltm -> tm_min;

    else if(arg == "hour")
        return ltm -> tm_hour;

    else if(arg == "day")
        return ltm -> tm_mday;

    else if(arg == "wday")
        return ltm -> tm_wday;

    else if(arg == "month")
        return ltm -> tm_mon;

    else if(arg == "year")
        return ltm -> tm_year;

    return -1;
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
            directoryPath += '\\';
    }

    return directoryPath;
}

bool findChars(const std::string &line, const std::string &chars){

    for(char c : chars)
        if (line.find(c) != std::string::npos)
            return true;

    return false;
}

std::string getDays(std::string &daysLine){

    std::string daysL;
    transform(daysLine.begin(), daysLine.end(), daysLine.begin(), ::tolower);

    if(daysLine.find("everyday") != std::string::npos || daysLine.find("diario") != std::string::npos)
        daysL = "everyday";

    else{
        if (daysLine.find("lunes") != std::string::npos || daysLine.find("monday") != std::string::npos)
            daysL += "monday ";

        if (daysLine.find("martes") != std::string::npos || daysLine.find("tuesday") != std::string::npos)
            daysL += "tuesday ";

        if (daysLine.find("miercoles") != std::string::npos || daysLine.find("wednesday") != std::string::npos)
            daysL += "wednesday ";

        if (daysLine.find("jueves") != std::string::npos || daysLine.find("thursday") != std::string::npos)
            daysL += "thursday ";

        if (daysLine.find("viernes") != std::string::npos || daysLine.find("friday") != std::string::npos)
            daysL += "friday ";

        if (daysLine.find("sabado") != std::string::npos || daysLine.find("saturday") != std::string::npos)
            daysL += "saturday ";

        if (daysLine.find("domingo") != std::string::npos || daysLine.find("sunday") != std::string::npos)
            daysL += "sunday ";
    }

    return daysL;
}


#pragma clang diagnostic pop