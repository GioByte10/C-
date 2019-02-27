#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char num[100];
    float numb;

    printf("Introduzca un numero\n");
    scanf("%s", &num);
    numb = atof(num);
    printf("\n");
    printf ("%f\n \n \n", numb * 5);


    system("PAUSE");
    return 0;
}
