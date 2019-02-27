#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <stdio.h>
#define TAM 100
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

int main(){

  string password;
  COORD coord[2];
  double TIME;
  char message[TAM], Cmessage[TAM + 16], CTIME[] = "2112025020194204";
  float IntercalatedF_;
  int Intercalated_;

  printf("Welcome to the TiBaEMeG project\n");
  coord[0] = getxy();
  cin >> password;
  printf("\n");

  if (password == "CyProDev"){

     for(int i = 0; i <= 30; i++){
        gotoxy(coord[i].X, coord[0].Y);
        printf(" ");

     }


//     test = char(num);

     //printf("%s", test);





  }else{
   system("PAUSE");
   return 0;
  }


  system("PAUSE");
  return 0;

}
