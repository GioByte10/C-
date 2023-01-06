#include <windows.h>

int main() {

    HKEY newKey;
    LPCSTR value = "SilentStart";

    RegOpenKey(HKEY_CURRENT_USER, R"(Software\Microsoft\Windows\CurrentVersion\Run)", &newKey);
    LONG result = RegDeleteValue(newKey, value);
    RegCloseKey(newKey);

    if (result != ERROR_SUCCESS) {
        MessageBox(nullptr, "Could not remove from startup", "SilentStart Error", MB_ICONERROR);
        exit(1);
    }

    MessageBox(nullptr, "Successfully removed from startup", "SilentStart", MB_ICONINFORMATION);
    system("taskkill /f /im SilentStart.exe");

    return 0;
}