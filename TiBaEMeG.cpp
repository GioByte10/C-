#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <chrono>
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

char dat(char d[0], int i){

    int NumDate;
    char ChDate[15], ChDateDiag[100];

    ChDate[12] = d[20];               ////////////////
    ChDate[7]  = d[21];               /////YEAR///////
    ChDate[10] = d[22];               ////////////////
    ChDate[3]  = d[23];               ////////////////


    ChDate[8]  = d[8];                //////DAY///////
    ChDate[1]  = d[9];


    ChDate[6]  = d[12];               //////HOUR//////
    ChDate[9]  = d[11];

    ChDate[13] = d[14];
    ChDate[11] = d[15];

    ChDate[2]  = d[18];
    ChDate[4]  = d[17];



    if (d[4] == 'J' && d[5] == 'a' && d[6] == 'n'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '1';
        ChDate[14] = '0';
        ChDate[5] = '1';

    }else if (d[4] == 'F' && d[5] == 'e' && d[6] == 'b'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '2';
        ChDate[14] = '0';
        ChDate[5] = '2';

    }else if (d[4] == 'M' && d[5] == 'a' && d[6] == 'r'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '3';
        ChDate[14] = '0';
        ChDate[5] = '3';

    }else if (d[4] == 'A' && d[5] == 'b' && d[6] == 'r'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '4';
        ChDate[14] = '0';
        ChDate[5] = '4';

    }else if (d[4] == 'M' && d[5] == 'a' && d[6] == 'y'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '5';
        ChDate[14] = '0';
        ChDate[5] = '5';

    }else if (d[4] == 'J' && d[5] == 'u' && d[6] == 'n'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '6';
        ChDate[14] = '0';
        ChDate[5] = '6';

    }else if (d[4] == 'J' && d[5] == 'u' && d[6] == 'l'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '7';
        ChDate[14] = '0';
        ChDate[5] = '7';

    }else if (d[4] == 'A' && d[5] == 'g' && d[6] == 'u'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '8';
        ChDate[14] = '0';
        ChDate[5] = '8';

    }else if (d[4] == 'S' && d[5] == 'e' && d[6] == 'p'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '9';
        ChDate[14] = '0';
        ChDate[5] = '9';

    }else if (d[4] == 'O' && d[5] == 'c' && d[6] == 't'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '0';
        ChDate[14] = '1';
        ChDate[5] = '0';

    }else if (d[4] == 'N' && d[5] == 'o' && d[6] == 'v'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '1';
        ChDate[14] = '1';
        ChDate[5] = '1';

    }else if (d[4] == 'D' && d[5] == 'e' && d[6] == 'c'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '2';
        ChDate[14] = '1';
        ChDate[5] = '2';

    }



    if (d[0] == 'M' && d[1] == 'o' && d[2] == 'n'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '1';
        ChDate[0] = '1';

    }else if (d[0] == 'T' && d[1] == 'u' && d[2] == 'e'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '2';
        ChDate[0] = '2';

    }else if (d[0] == 'W' && d[1] == 'e' && d[2] == 'd'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '3';
        ChDate[0] = '3';

    }else if (d[0] == 'T' && d[1] == 'h' && d[2] == 'u'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '4';
        ChDate[0] = '4';

    }else if (d[0] == 'F' && d[1] == 'r' && d[2] == 'i'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '5';
        ChDate[9] = '0';
        ChDate[0] = '5';

    }else if (d[0] == 'S' && d[1] == 'a' && d[2] == 't'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '6';
        ChDate[9] = '0';
        ChDate[0] = '6';

    }else if (d[0] == 'S' && d[1] == 'u' && d[2] == 'n'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '7';
        ChDate[0] = '7';

    }

    return ChDate[i];

}

  int GetABC(int NNTIME[], int i){

    int j = 0, R[15];

    R[j] = NNTIME[j] * NNTIME[j + 1];

    for (j = 0; j <= 11; j++){

        R[j + 1] = R[j] / NNTIME[j + 2];
        R[j + 2] = R[j + 1] * NNTIME[j + 3];
    }

    R[14] = R[13] / NNTIME[0];

    return R[i];

  }

int main(){

  string password;
  COORD coord[2];
  char TIME[16], ABC[92];
  float IntercalatedF_;
  int Intercalated_;
  double NTIME;

  ABC[0] = 'A';
  ABC[1] = '#';
  ABC[2] = 'a';
  ABC[3] = 'B';
  ABC[4] = '?';
  ABC[5] = 'b';
  ABC[6] = 'C';
  ABC[7] = ',';
  ABC[8] = 'c';
  ABC[9] = 'D';
  ABC[10] = '{';
  ABC[11] = 'd';
  ABC[12] = 'E';
  ABC[13] = '}';
  ABC[14] = 'e';
  ABC[15] = 'F';
  ABC[16] = '&';
  ABC[17] = 'f';
  ABC[18] = 'G';
  ABC[19] = '!';
  ABC[20] = 'g';
  ABC[21] = '0';
  ABC[22] = '@';
  ABC[23] = 'h';
  ABC[24] = 'H';
  ABC[25] = '%';
  ABC[26] = 'i';
  ABC[27] = 'I';
  ABC[28] = '^';
  ABC[29] = '1';
  ABC[30] = 'J';
  ABC[31] = '*';
  ABC[32] = 'j';
  ABC[33] = 'K';
  ABC[34] = '(';
  ABC[35] = 'k';
  ABC[36] = 'L';
  ABC[37] = ')';
  ABC[38] = '2';
  ABC[39] = 'M';
  ABC[40] = '-';
  ABC[41] = 'l';
  ABC[42] = 'N';
  ABC[43] = '_';
  ABC[44] = 'm';
  ABC[45] = '3';
  ABC[46] = '+';
  ABC[47] = 'n';
  ABC[48] = 'O';
  ABC[49] = '=';
  ABC[50] = 'o';
  ABC[51] = 'P';
  ABC[52] = '|';
  ABC[53] = 'p';
  ABC[54] = 'Q';
  ABC[55] = '/';
  ABC[56] = '4';
  ABC[57] = 'R';
  ABC[58] = '<';
  ABC[59] = 'q';
  ABC[60] = 'S';
  ABC[61] = '>';
  ABC[62] = 'r';
  ABC[63] = '5';
  ABC[64] = '.';
  ABC[65] = 's';
  ABC[66] = 'T';
  ABC[67] = ';';
  ABC[68] = 't';
  ABC[69] = 'G';
  ABC[70] = ':';
  ABC[71] = 'u';
  ABC[72] = 'U';
  ABC[73] = '[';
  ABC[74] = 'v';
  ABC[75] = 'V';
  ABC[76] = ']';
  ABC[77] = '7';
  ABC[78] = 'W';
  ABC[79] = '`';
  ABC[80] = '8';
  ABC[81] = '9';
  ABC[82] = '$';
  ABC[83] = 'w';
  ABC[84] = 'X';
  ABC[85] = '~';
  ABC[86] = 'x';
  ABC[87] = 'Y';
  ABC[88] = 'y';
  ABC[89] = 'Z';
  ABC[90] = ' ';
  ABC[91] = 'z';

  printf("Welcome to the TiBaEMeG project\n");
  coord[0] = getxy();
  cin >> password;
  printf("\n");

  if (password == "CyProDev"){

     for(int i = 0; i <= 30; i++){
        gotoxy(coord[i].X, coord[0].Y);
        printf(" ");

     }
     printf("\n");




        auto start = chrono::system_clock::now();
    // Some computation here
    auto end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    cout << "finished computation at " << ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";

    printf("\n\n");

    for(int i = 0; i < 15; i++){

        TIME[i] = dat(ctime(&end_time), i);

    }

    cout << "Char KEY: " <<TIME << endl;

    stringstream geek(TIME);
    geek >> NTIME;

    //for ()





  }else{
   system("PAUSE");
   return 0;
  }


  system("PAUSE");
  return 0;

}
