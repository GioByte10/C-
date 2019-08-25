#include <stdio.h>  //standard input and output header

int main(){

  int num = 0, num2 = 0, sum = 0, rest = 0;
  float numf, numf2;


  printf("Dime un numero entero\n");
  scanf("%d", &num);
  printf("Otro numero\n");
  scanf("%d", &num2);

  sum = num + num2;
  rest = num - num2;


  printf("La multiplicacion de los numeros es %d\n", num * num2);

  numf = num;
  numf2 = num2;

  printf("La division de los numeros es %f\n", numf / numf2);



}
