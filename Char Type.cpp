#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    char character;
do {


    printf("Enter a Character\n \ n");
    cin >> character;
    //scanf("%c", &character);
    printf ("\n");

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        printf ("Tiny Vowel\n");
    }else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
        printf ("Vowel\n");
    }else
     printf ("Consonant\n");


 }while (character != '-');


    system("PAUSE");
    return 0;
}
