//
// Created by super on 1/2/2023.
//

#ifndef COMPILETEST_USEFUL_H
#define COMPILETEST_USEFUL_H

#include <windows.h>

bool checkAlreadyExists(LPCSTR value);
void addToRegistry(LPCSTR value, TCHAR filePath[]);

#endif //COMPILETEST_USEFUL_H
