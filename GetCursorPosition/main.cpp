//This program allow us to get out cursor/mouse position in the screen
#include <stdio.h>
#include <windows.h>
#include <winuser.h>

void gotoxy(short x, short y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

COORD getxy(){
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.dwCursorPosition;
}


POINT getMouseCursorPosition(){
    POINT cursor;
    GetCursorPos(&cursor);
    return cursor;
}

int main()
{
    int X, Y, pass;
    POINT cursor;

    cursor = getMouseCursorPosition();

    Y = cursor.y;
    X = cursor.x;
    printf(" X = %i; ", X);
    printf(" Y = %i", Y);

}
