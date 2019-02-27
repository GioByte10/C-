#include <stdio.h>
using namespace std;


 int sum (int x, int y){
  return x + y;
 }

 void equals (int &x, int y){
  x = y;
 }

int main(){

  int x, y;

  printf("Introduzaca dos numeros\n");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("%d", sum (x, y));
  equals(x, y);
  printf("%d", x);
}
