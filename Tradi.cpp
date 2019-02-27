#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <string>
using namespace std;

void gotoxy(int x, int y)
{
    // set the current cursor position
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
COORD getxy()
{
    // get the current cursor position
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.dwCursorPosition;
}

//void satatus (char, char);

int hand(void){
        int hand;
        hand = 1 + rand() % (3);
        return hand;
    }

void stat(string x, string y)
{
    if (x == y)
        printf("Empate");
    else if ((x == "piedra") && (y == "papel"))
        printf("La computadora gana");
    else if ((x == "piedra") && (y == "tijeras"))
        printf("Ganaste!");
    else if ((x == "papel") && (y == "piedra"))
        printf("Ganaste!");
    else if ((x == "papel") && (y == "tijeras"))
        printf("La computadora gana");
    else if((x == "tijeras") && (y == "papel"))
        printf("Ganaste!");
    else if ((x == "tijeras") && (y == "piedra"))
        printf("La computadora gana");

}

int main()
{
    srand(time(NULL));
    string selection;
    string comp;
    int c, cont, num, status;

    printf("\t \t \t \t \t \t Piedra Papel o Tijeras\n \n \n");

    while(cont != 0)
    {
        printf("Tu turno:\n");
        cin >> selection;
        c = 0;
        num = hand();
        if (num == 1){
          /*comp[0] = 'p';
          comp[1] = 'i';
          comp[2] = 'e';
          comp[3] = 'd';
          comp[4] = 'r';
          comp[5] = 'a';
          comp[6] = '\0';*/
          comp = "piedra";
        }else if (num == 2){
          /*comp[0] = 't';
          comp[1] = 'i';
          comp[2] = 'j';
          comp[3] = 'e';
          comp[4] = 'r';
          comp[5] = 'a';
          comp[6] = 's';*/
          comp = "tijeras";
        }else if (num == 3){
         /* comp[0] = 'p';
          comp[1] = 'a';
          comp[2] = 'p';
          comp[3] = 'e';
          comp[4] = 'l';
          comp[5] = '\0';
          comp[6] = '\0';*/
          comp = "papel";
        }



        while(c <= 5){

            printf(".");
            Sleep(350);
            c++;
        }
//        strlwr(selection);
        cout << "     " << comp << endl;

        stat(selection, comp);
        printf("\n \n");

        //system("PAUSE");


    }
}
