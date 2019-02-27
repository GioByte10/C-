#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#define TAM 25
using namespace std;

char dat(char d[0], int i){

    int NumDate;
    char ChDateDiag[TAM], ChDate[11];

    ChDate[0] = '1';
    ChDate[1] = d[8];
    ChDate[2] = d[9];

    ChDateDiag[0] = d[8];
    ChDateDiag[1] = d[9];
    ChDateDiag[2] = '/';
    ChDateDiag[5] = '/';
    ChDateDiag[10] = '/';

    if (d[4] == 'J' && d[5] == 'a' && d[6] == 'n'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '1';
        ChDate[3] = '0';
        ChDate[4] = '1';

    }else if (d[4] == 'F' && d[5] == 'e' && d[6] == 'b'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '2';
        ChDate[3] = '0';
        ChDate[4] = '2';

    }else if (d[4] == 'M' && d[5] == 'a' && d[6] == 'r'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '3';
        ChDate[3] = '0';
        ChDate[4] = '3';

    }else if (d[4] == 'A' && d[5] == 'b' && d[6] == 'r'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '4';
        ChDate[3] = '0';
        ChDate[4] = '4';

    }else if (d[4] == 'M' && d[5] == 'a' && d[6] == 'y'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '5';
        ChDate[3] = '0';
        ChDate[4] = '5';

    }else if (d[4] == 'J' && d[5] == 'u' && d[6] == 'n'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '6';
        ChDate[3] = '0';
        ChDate[4] = '6';

    }else if (d[4] == 'J' && d[5] == 'u' && d[6] == 'l'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '7';
        ChDate[3] = '0';
        ChDate[4] = '7';

    }else if (d[4] == 'A' && d[5] == 'g' && d[6] == 'u'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '8';
        ChDate[3] = '0';
        ChDate[4] = '8';

    }else if (d[4] == 'S' && d[5] == 'e' && d[6] == 'p'){
        ChDateDiag[3] = '0';
        ChDateDiag[4] = '9';
        ChDate[3] = '0';
        ChDate[4] = '9';

    }else if (d[4] == 'O' && d[5] == 'c' && d[6] == 't'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '0';
        ChDate[3] = '1';
        ChDate[4] = '0';

    }else if (d[4] == 'N' && d[5] == 'o' && d[6] == 'v'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '1';
        ChDate[3] = '1';
        ChDate[4] = '1';

    }else if (d[4] == 'D' && d[5] == 'e' && d[6] == 'c'){
        ChDateDiag[3] = '1';
        ChDateDiag[4] = '2';
        ChDate[3] = '1';
        ChDate[4] = '2';

    }

    ChDateDiag[6] = d[20];
    ChDateDiag[7] = d[21];
    ChDateDiag[8] = d[22];
    ChDateDiag[9] = d[23];

    ChDate[5] = d[20];
    ChDate[6] = d[21];
    ChDate[7] = d[22];
    ChDate[8] = d[23];

    if (d[0] == 'M' && d[1] == 'o' && d[2] == 'n'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '1';
        ChDate[9] = '0';
        ChDate[10] = '1';

    }else if (d[0] == 'T' && d[1] == 'u' && d[2] == 'e'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '2';
        ChDate[9] = '0';
        ChDate[10] = '2';

    }else if (d[0] == 'W' && d[1] == 'e' && d[2] == 'd'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '3';
        ChDate[9] = '0';
        ChDate[10] = '3';

    }else if (d[0] == 'T' && d[1] == 'h' && d[2] == 'u'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '4';
        ChDate[9] = '0';
        ChDate[10] = '4';

    }else if (d[0] == 'F' && d[1] == 'r' && d[2] == 'i'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '5';
        ChDate[9] = '0';
        ChDate[10] = '5';

    }else if (d[0] == 'S' && d[1] == 'a' && d[2] == 't'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '6';
        ChDate[9] = '0';
        ChDate[10] = '6';

    }else if (d[0] == 'S' && d[1] == 'u' && d[2] == 'n'){
        ChDateDiag[11] = '0';
        ChDateDiag[12] = '7';
        ChDate[9] = '0';
        ChDate[10] = '7';

    }

    ChDateDiag[13] = ' ';

    return ChDate[i];

}

int main()
{
    double date, time, DATE;
    int i;
    char DATEC[11];

    auto start = chrono::system_clock::now();
    // Some computation here
    auto end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    cout << "finished computation at " << ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";


    for (i = 0; i < 11; i++){
        DATEC[i] = dat(ctime(&end_time), i);

    }

    DATE = atoi(DATEC);
    cout << DATEC << endl;
    cout << DATE;

}
