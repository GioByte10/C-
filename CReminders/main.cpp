#include <windows.h>
#include <iostream>
#include <list>
#include <fstream>

bool checkAlreadyExists(LPCSTR value){

    HKEY checkKey;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToRegistry(LPCSTR value, TCHAR *filePath){

    HKEY newKey;

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    LONG result = RegSetValueEx(newKey, value, 0, REG_SZ, (LPBYTE)filePath, lstrlen(filePath));
    RegCloseKey(newKey);

    if(result != ERROR_SUCCESS){
        MessageBox(nullptr, "Could not add to startup", "Error 0x00", MB_ICONERROR);
        exit(1);
    }
}

std::string intDayToStringDay(int intDay){

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

}

int getCurrentTime(const std::string& arg, time_t now, tm *ltm){

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

bool isToday(int i, time_t now, tm *ltm, std::list<std::string> *days_list){

    auto days_i = days_list -> begin();
    advance(days_i, i);

    std::string days = *days_i;

    if(days == "everyday" || days.find(intDayToStringDay(getCurrentTime("wday", now, ltm))) != std::string::npos)
        return true;

    return false;
}

std::string getDirectoryPath(TCHAR *filePath, int steps){

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

std::string patchSpaces(const std::string& line, char r){

        std::string newLine;

        for(char c : line){
            if(c == ' ')
                newLine += r;
            else
                newLine += c;
        }

        return newLine;

}

bool findChars(const std::string &line, const std::string &chars){

    for(char c : chars)
        if (line.find(c) != std::string::npos)
            return true;

    return false;

}

std::string getLineInformation(const std::string& line){

    int i;

    for(i = 0; i < line.length(); i++)
        if(line[i] == ':')
            break;
    i++;

    for(; i < line.length(); i++)
        if(line[i] != ' ')
            break;

    return patchSpaces(line.substr(i, line.length() - 1), '~');
}

void getTimeInformation(const std::string& timeString, std::list <int> *hour_list, std::list <int> *minute_list){
    
    int i;
    
    for(i = 0; i < timeString.length(); i++)
        if(timeString[i] == ':')
            break;
    
    hour_list->emplace_back     (stoi(timeString.substr(0,i)));
    minute_list->emplace_back   (stoi(timeString.substr(i + 1, timeString.length())));
}

void getInformation(const std::string& infoPath, std::list<std::string> *notificationContent_list, std::list<std::string> *days_list, std::list <int> *hour_list, std::list <int> *minute_list){

    std::ifstream info;
    std::string line;

    int i, nBlocks;
    const int linesPerBlock = 9;

    info.open(infoPath);

    if(info.fail()){
        MessageBox(nullptr, "info.txt did not open", "Error 0x01", MB_ICONERROR);
        exit(1);
    }

    for(i = 0; getline(info, line); i++);

    info.clear();
    info.seekg(0);

    i--;

    if(i % (linesPerBlock + 1) != 0){
        MessageBox(nullptr, "info.txt is not correctly formatted", "Error 0x02", MB_ICONERROR);
        exit(1);
    }

    nBlocks = i/(linesPerBlock + 1);
    std::string lines[nBlocks * linesPerBlock];

    for(int j = 0; j < nBlocks * linesPerBlock; j++){
        getline(info, line);

        if(line.find("----------") != std::string::npos)
            j--;

        else
            lines[j] = getLineInformation(line);

    }

    info.close();

    for(int  j = 0; j < nBlocks; j++){
        line = "";

        if(findChars(lines[j * linesPerBlock], "yYsS")){
            line += lines[1 + j * linesPerBlock] + ' ' + lines[2 + j * linesPerBlock] + ' ' + lines[3 + j * linesPerBlock];

            if(findChars(lines[4 + j * linesPerBlock], "yYsS"))
                line += ' ' + lines[5 + j * linesPerBlock] + ' ' + lines[6 + j * linesPerBlock];

            notificationContent_list->emplace_back(line);
            getTimeInformation(lines[7 + j * linesPerBlock], hour_list, minute_list);
            days_list->emplace_back(lines[8 + j * linesPerBlock]);
        }
    }
}

int main() {

    ShowWindow(GetConsoleWindow(), SW_HIDE);
    LPCSTR value = "CReminders";
    std::string infoPath, notificationPath;

    std::list <std::string>     notificationContent_list;
    std::list <std::string>     days_list;
    std::list <int>             hour_list;
    std::list <int>             minute_list;

    std::string                 notificationContent;
    int                         hour;
    int                         minute;

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    if(!checkAlreadyExists(value))
        addToRegistry(value, filePath);

    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    infoPath = getDirectoryPath(filePath, 1) + "\\info.txt";
    notificationPath = getDirectoryPath(filePath, 1) + R"(\ToastNotification\dist\main.exe)";
    getInformation(infoPath, &notificationContent_list, &days_list, &hour_list, &minute_list);

    /*
    for(const auto& l: notificationContent_list)
        std::cout << l.c_str() << std::endl;

    for(const auto& l: hour_list)
        std::cout << l << std::endl;

    for(const auto& l: minute_list)
        std::cout << l << std::endl;

    for(const auto& l: days_list)
        std::cout << l << std::endl;
    */

    auto notificationContent_i      = notificationContent_list.begin();
    auto hour_i                     = hour_list.begin();
    auto minute_i                   = minute_list.begin();

    while(true){

        notificationContent_i   = notificationContent_list.begin();
        hour_i                  = hour_list.begin();
        minute_i                = minute_list.begin();

        for (int i = 0; i < notificationContent_list.size(); i++) {
            notificationContent = *notificationContent_i;
            hour = *hour_i;
            minute = *minute_i;

            if(minute == getCurrentTime("min", now, ltm) && hour == getCurrentTime("hour", now, ltm) && isToday(i, now, ltm, &days_list)){
                ShellExecuteA(nullptr, "open", notificationPath.c_str(), notificationContent.c_str(), nullptr, 0);
                Sleep(20000);
            }

            std::advance(notificationContent_i, 1);
            std::advance(hour_i, 1);
            std::advance(minute_i, 1);
        }
        Sleep(50000);
    }
}
