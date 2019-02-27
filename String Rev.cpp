#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char strin[100];

    printf("Inoduzca una cadena\n");
    scanf ("%s", strin);
    printf("\n");

    strrev(strin);
    strupr(strin);
    strlwr(strin);

    printf("%s\n \n \n", strin);

    system("PAUSE");
    return 0;
}
