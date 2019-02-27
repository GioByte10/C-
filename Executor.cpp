#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{

    int x, y;
    x = 1365;
    y = 767;

    SetCursorPos(x, y);
    Sleep(200);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);

    while(true){
    system("F:\Test.exe");
    }
}
