#include <windows.h>
#include <string>

int main(){

    std::wstring progPath = L"C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\ZoomAttend.exe";
    HKEY hkey = nullptr;
    LONG createStatus = RegCreateKey(HKEY_CURRENT_USER,
                                     reinterpret_cast<LPCSTR>(L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"), &hkey); //Creates a key
    LONG status = RegSetValueEx(hkey, reinterpret_cast<LPCSTR>(L"ZoomAttend"), 0, REG_SZ, (BYTE *)progPath.c_str(), (progPath.size() + 1) * sizeof(wchar_t));

}
