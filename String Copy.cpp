#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    char text[] = "Probe";
    char emp[50];

    printf("%s\n", text);
    strcpy(emp, text);
    printf("%s\n \n", emp);

    system ("PAUSE");
    return 0;
}
