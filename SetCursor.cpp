//This program allow us to change the position of the cursor, using some cords
//and allow us to simulate/emulate a click
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winuser.h>

int main()
{

    int x, y;
    x = 162;
    y = 540;


    while(!(GetAsyncKeyState(0x11))){

    /*Sleep(200);
    SetCursorPos(x, y);                                   //Changes the cursor position*/
    Sleep(200);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);          //Simulate a click

    }


    //mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);



}
