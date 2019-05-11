#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

  int A, B, C, D, E, F;
  A = 8;

  C = A;
  //printf("C = %d", C);
  B = 2 * C + D;
  E = A / 8;
  //printf("E = %d", E);
  F = B / 2;
  D = (3 * B - (6 * C) - F) / 2;
  C = A;
  B = 2 * C + D;
  E = A / 8;
  F = B / 2;
  D = (3 * B - (6 * C) - F) / 2;

  printf("%d\n", A);
  printf("%d\n", B);
  printf("%d\n", C);
  printf("%d\n", D);
  printf("%d\n", E);
  printf("%d\n", F);

  system("PAUSE");
  return 0;

}
