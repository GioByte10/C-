#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <Mmdeviceapi.h>
#include <Endpointvolume.h>

BOOL ChangeVolume(float nVolume){
    HRESULT hr;
    IMMDeviceEnumerator *deviceEnumerator = nullptr;
    hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER,
                          __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
    if(FAILED(hr))
        return FALSE;

    IMMDevice *defaultDevice = nullptr;
    hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
    deviceEnumerator->Release();
    if(FAILED(hr))
        return FALSE;

    IAudioEndpointVolume *endpointVolume = nullptr;
    hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume),
                                 CLSCTX_INPROC_SERVER, nullptr, (LPVOID *)&endpointVolume);
    defaultDevice->Release();
    if(FAILED(hr))
        return FALSE;

    hr = endpointVolume->SetMasterVolumeLevelScalar(nVolume, nullptr);
    endpointVolume->Release();

    return SUCCEEDED(hr);
}

bool checkAlreadyExists(const LPCSTR &value){

    HKEY checkKey;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToRegistry(const LPCSTR &value, TCHAR *filePath){

    HKEY newKey;

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    LONG result = RegSetValueEx(newKey, value, 0, REG_SZ, (LPBYTE)filePath, lstrlen(filePath));
    RegCloseKey(newKey);

    if(result != ERROR_SUCCESS){
        MessageBox(nullptr, "Could not add to startup", "SilentStart Error 0x00", MB_ICONERROR);
        exit(1);
    }

    MessageBox(nullptr, "Successfully added to startup", "SilentStart", MB_ICONINFORMATION);

}

int getCurrentSeconds(time_t now, tm *ltm){
    now = time(nullptr);
    localtime(&now);

    return ltm -> tm_sec + (ltm -> tm_min * 60) + (ltm -> tm_hour * 3600);
}

int main(){

    LPCSTR value = "SilentStart";

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    if(!checkAlreadyExists(value)){
        addToRegistry(value, filePath);
    }else{
        CoInitialize(nullptr);
        ChangeVolume(0);
        CoUninitialize();
    }

    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    int elapsedSeconds = getCurrentSeconds(now, ltm);
    int updatedSeconds;

    while(true) {
        now = time(nullptr);
        localtime(&now);

        if(getCurrentSeconds(now, ltm) <= 4) {
            updatedSeconds = getCurrentSeconds(now, ltm);
            elapsedSeconds = updatedSeconds;
        }

        updatedSeconds = getCurrentSeconds(now, ltm);

        if (updatedSeconds - elapsedSeconds >= 4) {
            CoInitialize(nullptr);
            ChangeVolume(0);
            CoUninitialize();
            MessageBox(nullptr, "Volume has been muted", "SilentStart", MB_ICONINFORMATION);
        }

        elapsedSeconds = updatedSeconds;
        Sleep(1000);
    }
}