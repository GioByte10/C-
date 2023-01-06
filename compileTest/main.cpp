#include <iostream>
#include <windows.h>
#include "useful.h"

int main() {

    int x = 2;

    LPCSTR value = "compilerTest";

    TCHAR filePath[MAX_PATH];
    GetModuleFileName(nullptr, filePath, MAX_PATH);

    addToRegistry(value, filePath);

    std::cout << x << std::endl;
    return 0;
}
