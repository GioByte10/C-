#include <iostream>
#include <windows.h>
#include <string>


void gotoXY(short x, short y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char *argv[]) {

    std::string xS, yS;
    int x, y;

    xS = argv[1];
    yS = argv[2];

    x = stoi(xS);
    y = stoi(yS);

    gotoXY(x, y);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
