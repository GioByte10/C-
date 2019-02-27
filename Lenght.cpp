#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char word[100];
    int lenght;

    printf ("Enter a word\n");
    scanf("%[^\n]%*c", &word);
    lenght = strlen(word);
    printf ("\nThe lenght of the word is %d \n \n", lenght);



    system("PAUSE");
    return 0;
}
