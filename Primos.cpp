#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

  double num, j, tr;
  int sqro, i, tr2;
  while(true){

  j = 0 ;


  printf("Ingresa un numero para saber si es primo\n");
  scanf("%lf", &num);

  sqro = floor(sqrt(num));
  printf("%d\n", sqro);

  for(i = 2; i <= sqrt(num); i++){


        tr2 = (sqro / i) % 1;
        printf("%f   %d\n", (sqro / i) % 1, tr2);

    if (tr - tr2){

        j++;
    }

  }

  if (j > 0){
    printf("%f No es numero primo\n \n", num);
  }else if (j == 0){
      printf("%f Es un numero primo\n \n", num);
  }






  }
}
