#include <stdio.h>
#include <stdlib.h>                 //Para system PAUSE
#include <windows.h>                //Para getxy & gotoxy

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

int main(){

   COORD coord;               //Variable para almacenar las coordenadas x y
   int num;


   printf("Ingrese un numero (no mayor a 30)\n");
   scanf("%d", &num);                                       //"cin"
   printf("\n \n");
   coord = getxy();                                         //Para saber desde que posicion empezar
   printf("%c", 201);
   gotoxy(coord.X + num, coord.Y);
   printf("%c", 187);
   gotoxy(coord.X, coord.Y + num);                          //Todo esto es para las esquinas
   printf("%c", 200);
   gotoxy(coord.X + num, coord.Y + num);
   printf("%c", 188);


   if (num > 1){
        for(int j = 0; j <= num; j += num){
           for (int i = 1; i < num; i++){                  //Estos for son para las posiciones x's de arriba y abajo
              gotoxy(coord.X + i, coord.Y + j);
              printf("%c", 205);
             }
        }

        for(int j = 0; j <= num; j += num){
           for (int i = 1; i < num; i++){                  //Estos for son para las posiciones y's de izquierda y derecha
              gotoxy(coord.X + j, coord.Y + i);
              printf("%c", 186);
             }
        }

   }

   gotoxy(0, coord.Y + num + 2);
   printf("Taraa\n \n");


   system("PAUSE");
   return 0;
}
