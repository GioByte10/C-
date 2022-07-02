#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 50
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
    return x;
}

   /*void NEW (int i){
       int x;
     COORD coord[TAM];
     coord[0] = getxy();
     printf ("%d %d", coord[0].X, coord[0].Y);
     coord[i] = getxy();
       if( coord[i].Y != coord[0].Y )
        gotoxy(coord[i].X+ndigits(x)+1, coord[0].Y);
}*/
  long zvalue (long A[TAM][TAM]){

   return ((A[0][0] * A[1][1] * A[2][3]) + (A[0][1] * A[1][3] * A[2][0]) + (A[0][3] * A[1][0] * A[2][1])) - ((A[0][1] * A[1][0] * A[2][3]) + (A[0][0] * A[1][3] * A[2][1]) + (A[0][3] * A[1][1] * A[2][0]));
  }

  long yvalue (long A[TAM][TAM]){

   return ((A[0][0] * A[1][3] * A[2][2]) + (A[0][3] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][3])) - ((A[0][3] * A[1][0] * A[2][2]) + (A[0][0] * A[1][2] * A[2][3]) + (A[0][2] * A[1][3] * A[2][0]));
  }

  long xvalue (long A[TAM][TAM]){

   return ((A[0][3] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][3]) + (A[0][2] * A[1][3] * A[2][1])) - ((A[0][1] * A[1][3] * A[2][2]) + (A[0][3] * A[1][2] * A[2][1]) + (A[0][2] * A[1][1] * A[2][3]));
  }
  long det (long A[TAM][TAM]){

   return ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1])) - ((A[0][1] * A[1][0] * A[2][2]) + (A[0][0] * A[1][2] * A[2][1]) + (A[0][2] * A[1][1] * A[2][0]));
  }



int main(int argc, char* argv[])
{
  int x, y, r, c, cursor, sum, h, estable, selection, d, d2;
  sum = 4;
  int rows, columns;
  long A[TAM][TAM];
  long B[TAM][TAM];
  COORD coord [TAM];
  char buff[] = "   ";


  printf ("\t \t \t \t \t \t     MATRIX SUM\n \n \n");
  printf ("What type of Mtrix you want to know?\n");
  printf ("1.- Cramer\n2.- Gauss\n \n");
  coord[1] = getxy();
  scanf ("%d", &selection);


  if (selection == 1){
    printf ("Fill the spaces with the values with the format\n");

    printf ("  x   y   z  =  __\n  x   y   z  =  __\n  x   y   z  =  __\n \n");
    system ("PAUSE");

    printf ("\n \n");

    for (d = coord[1].Y; d < 12; d++){

        for (d2 = coord[1].X; d2 < 45; d2++){
            HANDLE hOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);
                coord[2] = {d2,d};
          ::SetConsoleCursorPosition(hOutput, coord[2]);

            ::WriteConsoleA(hOutput, buff, 3, NULL, NULL);
        }
        printf ("\n");
    }
     gotoxy(coord[1].X, coord[1].Y);
    printf ("CRAMER");
    coord[1] = getxy();

    for (d = coord[1].Y + 1; d < 14; d++){

        for (d2 = 0; d2 < 29; d2++){
            HANDLE hOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);
                coord[2] = {d2,d};
          ::SetConsoleCursorPosition(hOutput, coord[2]);

            ::WriteConsoleA(hOutput, buff, 3, NULL, NULL);
        }
        printf ("\n");
    }
     gotoxy(0, coord[1].Y + 1);

    for (r = 0; r < 3; r++){
        coord[0] = getxy();
        estable = 0;

      for (c = 0; c < 4; c++){

         scanf("%ld", &A[r][c]);

         gotoxy(coord[0].X + ndigits(A[r][c]) + sum + estable, coord[0].Y);
         estable += ndigits(A[r][c]) - 1;
         sum += 5;
}
    sum = 4;
    printf ("\n");

  }
  printf ("\n \n \n");

  //det = ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1])) - ((A[0][1] * A[1][0] * A[2][2]) + (A[0][0] * A[1][2] * A[2][1]) + (A[0][2] * A[1][1] * A[2][0]));

  printf (" Determinant = %ld\n", det(A));

  //xvalue = ((A[0][3] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][3]) + (A[0][2] * A[1][3] * A[2][1])) - ((A[0][1] * A[1][3] * A[2][2]) + (A[0][3] * A[1][2] * A[2][1]) + (A[0][2] * A[1][1] * A[2][3]));

  printf (" X = %ld\n", (xvalue(A)) / (det(A)));

  printf (" Y = %ld\n", (yvalue(A)) / (det(A)));

  printf (" Z = %ld\n", (zvalue(A)) / (det(A)));


  }

  /*printf ("Enter the number of rows and columns of the matrix respectivily\n");        //myString.c_str()
  printf ("Rows:");
  memset (coord, 0, sizeof(coord));
  scanf ("%d", &rows);
  gotoxy (10, 4);
  printf ("Columns:");
  scanf ("%d", &columns);

  for (r = 0; r < rows; r++){
   coord[0] = getxy();
   estable = 0;
    for (c = 0; c < columns; c++){

    scanf("%ld", &A[r][c]);


     gotoxy(coord[0].X + ndigits(A[r][c]) + sum + estable, coord[0].Y);
     estable += ndigits(A[r][c]) - 1;
     sum += 4;
}
    sum = 3;
    printf ("\n");
  }*/




	return 0;
}

