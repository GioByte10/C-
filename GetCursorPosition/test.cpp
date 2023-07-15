#include <windows.h>
#include <stdio.h>

int main(){
    POINT cursor;

    while(true){
        GetCursorPos(&cursor);
        printf("X: %d, Y: %d\n", cursor.x, cursor.y);
    }
}