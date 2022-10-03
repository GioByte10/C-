#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nullptr"
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

#include <iostream>
#include <windows.h>
#include <list>
#include <fstream>
#include <Mmdeviceapi.h>
#include <Endpointvolume.h>

BOOL ChangeVolume(float nVolume){
    HRESULT hr = 0;
    IMMDeviceEnumerator *deviceEnumerator = NULL;
    hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER,
                          __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
    if(FAILED(hr))
        return FALSE;

    IMMDevice *defaultDevice = NULL;
    hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
    deviceEnumerator->Release();
    if(FAILED(hr))
        return FALSE;

    IAudioEndpointVolume *endpointVolume = NULL;
    hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume),
                                 CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
    defaultDevice->Release();
    if(FAILED(hr))
        return FALSE;

    hr = endpointVolume->SetMasterVolumeLevelScalar(nVolume, NULL);
    endpointVolume->Release();

    return SUCCEEDED(hr);
}

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
        MessageBox(nullptr, "Could not add to startup", "ClassSuppress Error 0x00", MB_ICONERROR);
        exit(1);
    }
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

std::string intDayToStringDayEn(int intDay){

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

bool isToday(int i, time_t now, tm *ltm, std::list<std::string> *days_list){

    auto days_i = days_list -> begin();
    advance(days_i, i);

    const std::string days = *days_i;

    if(days == "everyday" || days.find(intDayToStringDayEn(getCurrentTime("wday", now, ltm))) != std::string::npos)
        return true;

    return false;
}

void getInformation(std::list<std::string> *times, std::list<std::string> *day, const std::string& infoPath){

    std::ifstream info;
    std::string line;

    info.open(infoPath);
    info.clear();
    info.seekg(0);

    if(info.fail()){
        info.close();
        MessageBox(nullptr, "info.txt did not open", "ClassSuppress Error 0x01", MB_ICONERROR);
        exit(1);
    }

    for(int i = 0; getline(info, line); i++){
        if(i % 2 == 0)
            day->push_back(line);
        else
            times->push_back(line);

    }
    info.close();
}

int getTimeInformation(const std::string &timeString){

    unsigned long long i;
    int min;

    if(timeString.find(':') == std::string::npos){
        MessageBox(nullptr, "info.txt is incorrectly formatted", "ClassSuppress Error 0x02", MB_ICONERROR);
        exit(1);
    }

    i = timeString.find(':');

    try {
        min = stoi(timeString.substr(0, i)) * 60;
        min += stoi(timeString.substr(i + 1, timeString.length()));
        return min;

    } catch (std::invalid_argument &e){
        MessageBox(nullptr, "info.txt is incorrectly formatted", "ClassSuppress Error 0x03", MB_ICONERROR);
        exit(1);
    }

}

bool inRange(std::list<std::string> *range, time_t now, tm *ltm){

    auto range_i = range->begin();
    std::string line = *range_i;
    unsigned long long i;
    int starts, ends, current;

    current = getCurrentTime("hour", now, ltm) * 60 + getCurrentTime("min", now, ltm);

    for(int j = 0; j < range->size(); j++){
        if (line.find('-') != std::string::npos){
            i = line.find('-');
            starts = getTimeInformation(line.substr(0, i));
            ends = getTimeInformation(line.substr(i + 1, line.length()));

            if(current >= starts && current <= ends)
                return true;
        }else{
            MessageBox(nullptr, "info.txt is incorrectly formatted", "ClassSuppress Error 0x04", MB_ICONERROR);
            exit(1);
        }
    }

    return false;

}

bool checkClass(std::list<std::string> *times, int move, time_t now, tm *ltm){

    std::list <std::string> range;
    std::string line;
    unsigned long long i;

    auto times_i = times->begin();
    std::advance(times_i, move);

    line = *times_i;

    while(line.find(',') != std::string::npos){
        i = line.find(',');
        range.push_back(line.substr(0, i));
        line = line.substr(i + 1, line.length());
    }

    return inRange(&range, now, ltm);

}

int main() {

    LPCSTR value = "ClassSuppress";
    std::string directoryPath, infoPath;
    bool ifAny = false;

    std::list <std::string>     times;
    std::list <std::string>     days;

    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    if(!checkAlreadyExists(value)){
        addToRegistry(value, filePath);
    }

    directoryPath = getDirectoryPath(filePath, 1);
    infoPath = directoryPath + "\\\\info.txt";

    getInformation(&times, &days, infoPath);

    CoInitialize(NULL);
    ChangeVolume(0);
    CoUninitialize();

    for(int i = 0; i < days.size(); i++) {
        if (isToday(i, now, ltm, &days) && checkClass(&times, i, now, ltm)) {
            ifAny = true;
            break;
        }
    }

    if(!ifAny){
        ShellExecute(nullptr, "open", R"(C:\Users\super\AppData\Local\Discord\Update.exe)", R"(--processStart Discord.exe)", nullptr, SW_SHOWNORMAL);
    }

    return 0;
}

#pragma clang diagnostic pop
#pragma clang diagnostic pop