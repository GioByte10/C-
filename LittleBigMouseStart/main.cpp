#include <iostream>
#include <windows.h>
#include <wlanapi.h>
#pragma comment(lib, "wlanapi.lib")

bool checkAlreadyExists(const LPCSTR &value){

    HKEY checkKey = nullptr;
    LONG result = RegGetValueA(HKEY_CURRENT_USER, R"(SOFTWARE\Microsoft\Windows\CurrentVersion\Run)", value, RRF_RT_REG_SZ, nullptr, nullptr, nullptr);
    RegCloseKey(checkKey);

    if(result == ERROR_SUCCESS)
        return true;

    return false;
}

void addToStartUp(const LPCSTR &value, const TCHAR *filePath){

    HKEY newKey;

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    std::cout << filePath << ' ' << sizeof(filePath) <<  std::endl;
    LONG result = RegSetValueEx(newKey, value, 0, REG_SZ, (LPBYTE)filePath, lstrlen(filePath));
    RegCloseKey(newKey);

    if(result != ERROR_SUCCESS){
        MessageBox(nullptr, "Could not add to startup", "Error", MB_ICONERROR);
        exit(1);
    }
}

int main() {

    LPCSTR value = "LittleBigMouseStart";
    std::string networkTarget = "RESNET-BROTECTED";

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    bool r = false;

    if(!checkAlreadyExists(value))
        addToStartUp(value, filePath);

    HANDLE handle;
    DWORD dwVersion = 2;
    DWORD dwCurVersion = 0;
    DWORD dwResult;

    std::string networkFound;

    PWLAN_INTERFACE_INFO_LIST pIfList = nullptr;
    PWLAN_AVAILABLE_NETWORK_LIST pAvailableNetworkList = nullptr;
    PWLAN_AVAILABLE_NETWORK pAvailableNetwork;

    dwResult = WlanOpenHandle(dwVersion, nullptr, &dwCurVersion, &handle);

    if (dwResult != ERROR_SUCCESS)
        return 1;

    dwResult = WlanEnumInterfaces(handle, nullptr, &pIfList);

    if (dwResult != ERROR_SUCCESS)
        return 1;


    for (int i = 0; i < (int)pIfList->dwNumberOfItems; i++) {
        dwResult = WlanGetAvailableNetworkList(handle, &pIfList->InterfaceInfo[i].InterfaceGuid, 0, nullptr, &pAvailableNetworkList);

        if (dwResult != ERROR_SUCCESS)
            continue;

        for (int j = 0; j < (int)pAvailableNetworkList->dwNumberOfItems; j++) {
            pAvailableNetwork = &pAvailableNetworkList->Network[j];
            networkFound = reinterpret_cast<const char *>(pAvailableNetwork->dot11Ssid.ucSSID);

            if(networkFound == networkTarget)
                r = true;
        }
        WlanFreeMemory(pAvailableNetworkList);
    }

    WlanFreeMemory(pIfList);
    WlanCloseHandle(handle, nullptr);

    if(r)
        system(R"(SCHTASKS.EXE /RUN /TN \MyApps\LittleBigMouse)");

    return 0;
}
