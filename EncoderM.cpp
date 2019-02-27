#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <string>
using namespace std;

int decodify (char x, int c){

    char wordc[1000];

  if (x == 'A')
    wordc[c] = 'O';

  if (x == '0')
    wordc[c] = 'B';

  if (x == 'C')
    wordc[c] = 'I';

  if (x == '8')
    wordc[c] = 'D';

  if (x == 'E')
    wordc[c] = 'V';

  if (x == '7')
    wordc[c] = 'F';

  if (x == 'G')
    wordc[c] = 'T';

  if (x == '3')
    wordc[c] = 'H';

  if (x == 'J')
    wordc[c] = 'Q';

  if (x == '1')
    wordc[c] = 'K';

  if (x == 'L')
    wordc[c] = 'Z';

  if (x == 'M')
    wordc[c] = 'S';

  if (x == '5')
    wordc[c] = 'N';

  if (x == '2')
    wordc[c] = 'P';

  if (x == '6')
    wordc[c] = 'R';

  if (x == '9')
    wordc[c] = 'W';

  if (x == '4')
    wordc[c] = 'X';

  if (x == 'U')
    wordc[c] = 'Y';

  if (x == 'O')
    wordc[c] = 'A';

  if (x == 'Y')
    wordc[c] = 'U';

  if (x == 'I')
    wordc[c] = 'C';

  if (x == 'V')
    wordc[c] = 'E';

  if (x == 'S')
    wordc[c] = 'M';

  if (x == 'T')
    wordc[c] = 'G';

  if (x == 'Q')
    wordc[c] = 'J';

  if (x == 'Z')
    wordc[c] = 'L';

  if (x == 'e')
    wordc[c] = '1';

  if (x == 'w')
    wordc[c] = '2';

  if (x == 'r')
    wordc[c] = '3';

  if (x == 'g')
    wordc[c] = '4';

  if (x == 'l')
    wordc[c] = '5';

  if (x == 'd')
    wordc[c] = '0';

  if (x == 'm')
    wordc[c] = '6';

  if (x == 'y')
    wordc[c] = '7';

  if (x == 'z')
    wordc[c] = '8';

  if (x == 'j')
    wordc[c] = '9';

    return wordc[c];

}


int codify(char x, int c){

    char wordc[1000];

  if (x == '_')
    wordc[c] = '_';

  if (x == 'A')
    wordc[c] = 'O';

  if (x == 'B')
    wordc[c] = '0';

  if (x == 'C')
    wordc[c] = 'I';

  if (x == 'D')
    wordc[c] = '8';

  if (x == 'E')
    wordc[c] = 'V';

  if (x == 'F')
    wordc[c] = '7';

  if (x == 'G')
    wordc[c] = 'T';

  if (x == 'H')
    wordc[c] = '3';

  if (x == 'I')
    wordc[c] = 'C';

  if (x == 'J')
    wordc[c] = 'Q';

  if (x == 'K')
    wordc[c] = '1';

  if (x == 'L')
    wordc[c] = 'Z';

  if (x == 'M')
    wordc[c] = 'S';

  if (x == 'N')
    wordc[c] = '5';

  if (x == 'P')
    wordc[c] = '2';

  if (x == 'R')
    wordc[c] = '6';

  if (x == 'W')
    wordc[c] = '9';

  if (x == 'X')
    wordc[c] = '4';

  if (x == 'U')
    wordc[c] = 'Y';

  if (x == 'O')
    wordc[c] = 'A';

  if (x == 'Y')
    wordc[c] = 'U';

  if (x == 'I')
    wordc[c] = 'C';

  if (x == 'V')
    wordc[c] = 'E';

  if (x == 'S')
    wordc[c] = 'M';

  if (x == 'T')
    wordc[c] = 'G';

  if (x == 'Q')
    wordc[c] = 'J';

  if (x == 'Z')
    wordc[c] = 'L';

  if (x == '0')
    wordc[c] = 'd';

  if (x == '1')
    wordc[c] = 'e';

  if (x == '2')
    wordc[c] = 'w';

  if (x == '3')
    wordc[c] = 'r';

  if (x == '4')
    wordc[c] = 'g';

  if (x == '5')
    wordc[c] = 'l';

  if (x == '6')
    wordc[c] = 'm';

  if (x == '7')
    wordc[c] = 'y';

  if (x == '8')
    wordc[c] = 'z';

  if (x == '9')
    wordc[c] = 'j';


    return wordc[c];
    //printf("%c", wordc[c]);
}

int main()
{
    char word[1000], wordc[1000];
    int i, large, selection;
    string pass;
    printf("You know what to do\n");

    getline (cin, pass);

    if (pass == "codestartup")
    {

    scanf("%d", &selection);

    if (selection == -1){
co:
    while (true){

    printf("ENTER A WORD TO CODIFY\n \n");
    //getline(cin, word);
    scanf("%s", word);
    if (word[0] == '-' && word[1] == '2')
        goto de;

    printf("\n");
    large = strlen(word);

    for (i = 0; i < large; i++){

       wordc[i] = codify(word[i], i);
    }


    for (i = (large - 1); i >= 0; i--){

            printf("%c", wordc[i]);
    }

    printf("\n \n");
    }
    }else if (selection == -2){
de:
            while (true){

    printf("ENTER A WORD TO DECODIFY\n \n");
    //getline(cin, word);
    scanf("%s", word);
    if (word[0] == '-' && word[1] == '1')
        goto co;

    printf("\n");
    large = strlen(word);

    for (i = 0; i < large; i++){

       wordc[i] = decodify(word[i], i);
    }


    for (i = (large - 1); i >= 0; i--){

            printf("%c", wordc[i]);
    }

    printf("\n \n");

            }
    }
    }


    system("PAUSE");
    return 0;
}
