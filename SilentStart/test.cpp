#include <stdlib.h>
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

int getCurrentSeconds(time_t now, tm *ltm){
    now = time(nullptr);
    localtime(&now);

    return ltm -> tm_sec + (ltm -> tm_min * 60) + (ltm -> tm_hour * 3600);
}

int main(){

    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    CoInitialize(nullptr);
    ChangeVolume(0);
    CoUninitialize();

    int elapsedSeconds = getCurrentSeconds(now, ltm);
    int updatedSeconds;

    while(true) {
        now = time(nullptr);
        localtime(&now);

        if(getCurrentSeconds(now, ltm) <= 2) {
            updatedSeconds = getCurrentSeconds(now, ltm);
            elapsedSeconds = updatedSeconds;
        }

        updatedSeconds = getCurrentSeconds(now, ltm);

        if (updatedSeconds - elapsedSeconds >= 5) {
            CoInitialize(nullptr);
            ChangeVolume(0);
            CoUninitialize();
        }

        elapsedSeconds = updatedSeconds;
        Sleep(1000);
    }
}