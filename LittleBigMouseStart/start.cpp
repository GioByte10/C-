#include <windows.h>

int main(){
    ShellExecuteA(nullptr, "runas", R"(C:\Program Files\LittleBigMouse\LittleBigMouse_Daemon.exe)", R"(--start)", nullptr, SW_HIDE);
    return 0;
}