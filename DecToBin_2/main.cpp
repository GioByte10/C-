#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    long numero, recursando, x, acarreo[300];
    x = -1;

    printf ("\n");
    printf ("A continuacion introduzca un numero para ser convertido a binario\n");
    do{
    printf("Numero Decimal:");
    scanf(" %d", &numero);

     while (numero > 0){
         x++;
         recursando = numero % 2;             /*Modulo (1 o 0) a partir del residuo)*/
         numero /= 2;                         /*Dividir el numero entre 2*/
         acarreo[x] = recursando;
     }

     printf("Binario:");

     while (x >= 0){
         printf ("%d", acarreo[x]);           /*Invertir el orden de los numero*/
         x--;
     }
     printf("\n \n \n");
    } while (numero != -1);

     system("PAUSE");
     return 0;
}
