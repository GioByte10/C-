//This program allow us to get out cursor/mouse position in the screen
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winuser.h>

int main()
{
    int X, Y, pass;
    POINT cursor;

    while (true){

        GetCursorPos(&cursor);


        Y = cursor.y;
        X = cursor.x;
        printf(" X = %i; ", X);
        printf(" Y = %i", Y);
        system("cls");
    }


}
