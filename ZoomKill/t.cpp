#include <windows.h>

TCHAR* getFilePath(){

    static TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    return filePath;

}

int main() {
    ShellExecute(nullptr, "open", "MessageBox.vbs", nullptr, nullptr, SW_SHOWDEFAULT);
    return 0;
}
