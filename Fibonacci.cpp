#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
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

int ndigits(long n)
{
    // calculate the number of digits in an integer
    long x = 0;

    while( n > 0)
    {
        x++;
        n /= 10;
    }


    return x;
}


int main()
{
    COORD coord[2];
    unsigned long long number, last = 1, last2 = 0;
    unsigned long long fib = 1;
    bool cond = true;
    char buff[] = "   ";
    printf("\t \t \t ************ ADVERTENCIA: MAXIMO NUMERO SOPORTADO = 93 ************\n \n \n");

while (cond){
    printf ("Enter a number to get its Fiboncci serie\n");

    cin>>number;

    if (number == -1){
    cond = false;
    break;
    }
    coord[0] = getxy();

    printf("\n");

        gotoxy(coord[0].X + ndigits(number), coord[0].Y - 1);

    if (number == 1){
        printf("1\n \n");
    }else{
    printf(" :: ");
    printf ("1 ");
    }

    for(int i = 1; i < number; i++)
    {
      fib = last2 + last;
      cout<<fib<<" ";
      last2 = last;
      last = fib;
    }

    printf ("\n \n");

    fib = 1;
    last = 1;
    last2 = 0;

}

    system("PAUSE");
    return 0;
}
