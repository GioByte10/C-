#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <windows.h>
#define TAM 51
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

int start_spread(int i, int val){

int random, auxi, auxc, cards;



        srand ((time (NULL)) * 7) ;
    random = 0 + rand() % (51);
     cards = random;
    if (i != -1){
    if (cards == val){
        while(cards == val){
            srand ((time (NULL)) * 7);
            random = 0 + rand() % (51);
            cards = random;
        }
        //printf("%d", cards);
    }
        /*if (cards != 60){
            //printf("%d  ", cards);
            return cards;
        }
        goto endv;*/
    printf("%d  ", cards);
    return cards;

    }else{
    printf("%d  ", cards);
    return cards;

    }

//endv:


  printf("\n");
  }

int A5(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *5      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      5*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A2(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *2      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      2*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A3(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *3      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      3*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A4(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *4      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      4*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A6(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *6      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      6*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A7(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *7      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      7*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A8(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *8      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      8*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A9(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *9      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      9*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int A10(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *10     *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *     10*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int AJ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *J      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      J*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int AQ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *Q      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      Q*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int AK(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *K      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      K*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int AA(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *A      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      A*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  /////////////////////////////////////////////////////////////

  int B5(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *5      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      5*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int B2(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *2      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      2*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int B3(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *3      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      3*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int B4(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *4      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      4*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int B6(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *6      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      6*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int B7(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *7      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      7*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int B8(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *8      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      8*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int B9(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *9      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      9*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int B10(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;

    printf(" *10     *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *     10*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }
  int BJ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *J      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      J*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int BQ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *Q      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      Q*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int BK(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *K      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      K*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int BA(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *A      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  *l*  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      A*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }


  /////////////////////////////////////////////////////////////

  int C5(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *5      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      5*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int C2(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *2      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      2*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int C3(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *3      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      3*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int C4(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *4      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      4*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int C6(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *6      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      6*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int C7(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *7      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      7*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int C8(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *8      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      8*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int C9(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *9      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      9*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int C10(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *10     *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *     10*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

    int CJ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *J      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      J*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int CQ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *Q      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      Q*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int CK(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *K      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      K*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int CA(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *A      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      A*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }


  ////////////////////////////////////////////////////////////

  int D5(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *5      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      5*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D2(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *2      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      2*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D3(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *3      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      3*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D4(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *4      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      4*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D6(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *6      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      6*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D7(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *7      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      7*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D8(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *8      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      8*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D9(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *9      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      9*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int D10(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *10     *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *     10*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int DJ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *J      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      J*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int DQ(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *Q      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      Q*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int DK(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *K      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      K*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }

  int DA(int c, int y){
    gotoxy(c + 5, y);
    y++;
    printf(" *********\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *A      *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *   *   *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *  ***  *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *       *\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *      A*\n");
    gotoxy(c + 5, y);
    y++;
    printf(" *********");
  }


int main(){

  int cards[TAM], i, coun, sp[TAM];
  COORD coord[2];
  char buff[] = "   ";

  printf("WELCOME TO THE FISHING GAME!\n");
  printf("Are you ready to spread the cards?\n");
  system("PAUSE");
  printf("\n \n");

  for (int d = 0; d < 52; d++){

    sp[d] = d;

  }



  for (i = 0; i < 7; i++){
    if (i == 0){
        cards[i] = start_spread(-1, -1);
    }else{

    cards[i] = start_spread(i, cards[i - 1]);
    //printf("%d", cards[i]);
    Sleep(10);
    if (cards[i] == 60){
           //printf("%d", cards[i]);
        i--;
    }
    }
  }

  for (i = 0; i < 7; i++){
      sp[cards[i]] = '\0';
  }
  for (int d = 0; d < 52; d++){

    printf("%d\n", sp[d]);

  }
  printf("\n\n");
  coord[0] = getxy();

    for (int i = 0; i < 7; i++){
            coun = 1;
       coord[1] = getxy();

       if (cards[i] == coun){
         A2(coord[1].X, coord[0].Y);

       }
       coun++;

       if (cards[i] == coun){
         B2(coord[1].X, coord[0].Y);

       }
       coun++;

       if (cards[i] == coun){
         C2(coord[1].X, coord[0].Y);

       }
coun++;
         if (cards[i] == coun){
         D2(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A3(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B3(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C3(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D3(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A4(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B4(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C4(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D4(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A5(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B5(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C5(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D5(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A6(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B6(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C6(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D6(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A7(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B7(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C7(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D7(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A8(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B8(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C8(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D8(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A9(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B9(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C9(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D9(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         A10(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         B10(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         C10(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         D10(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         AJ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         BJ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         CJ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         DJ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         AQ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         BQ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         CQ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         DQ(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         AK(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         BK(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         CK(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         DK(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         AA(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         BA(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == coun){
         CA(coord[1].X, coord[0].Y);

         }
coun++;
         if (cards[i] == 0){
         DA(coord[1].X, coord[0].Y);

         }



    }
    printf("\n");



  system("PAUSE");
  return 0;
}
