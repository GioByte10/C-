#include <stdio.h>     // F functions
#include <stdlib.h>    //Pause; Random
#include <time.h>      //Random
#include <windows.h>     //Sleep; gotoxy; getxy;
#include <iostream>    //Cin; Cout
#include <math.h>      //Math operations
#include <string>
#include <string.h>    //Text cad
#define TAM 50
using namespace std;

int main(int argc, char *argv[])
{
    /*
    string; int; bool; char; long; float; double; long long;

    printf ("Hola");
    scanf ("%x", &x);

    cout <<variable <<"Text" <<endl
    cin >>variable >>endl;

    getxy();
    gotoxy (x, y);

    goto cont;

    cont:

        continue //Ignore something
        break;

        myString.c_str()  //Array of Strings
        strcpy(void, variable)
        strlen(char, variable);
        strrev(variable);
        strupr(VARIABLE);
        strlwr(variable);
        atoi(intvariable);
        atof(floatvariable);

        srand (time (NULL));
        random = minium + rand() % (maxium);

        printf("%s\n", cond?"true":"false");  //Get a Bool

   switch (variable){

   case 'a':
   case 1:

   }

    if (true)
 /////////////////
    while (true)
 ////////////////
   do{

   }while (true);
 ////////////////
   for (counter = 0; true; counter++)




//////////////////////////////////////////////////////////////////////////
for (d = coord[1].Y + 1; d < 14; d++){

        for (d2 = 0; d2 < 29; d2++){
            HANDLE hOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);   //TO DELETE
                coord[2] = {d2,d};
          ::SetConsoleCursorPosition(hOutput, coord[2]);

            ::WriteConsoleA(hOutput, buff, 3, NULL, NULL);
        }
        printf ("\n");
    }

////////////////////////////////////////////////////////////////////



    system ("PAUSE");
    system ("cls");  ////Clean all the console
    return 0;
}

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
int ndigits(long n)
{
    // calculate the number of digits in an integer
    long x = 0;

    if (n < 0){
    while (n <= -1){
        x++;
        n /= 10;
    }}else{

    while( n > 0)
    {
        x++;
        n /= 10;
    }

    }
    return x;*/
}
