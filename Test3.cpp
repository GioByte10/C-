#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){


  int test[10], ran;

  srand(time(NULL));

  for(int i = 0; i < sizeof(test) / sizeof(test[0]); i++){

    test[i] = rand() % 100;
    printf("%d\n", test[i]);

  }

  //for(int i = 0; i )



  system("PAUSE");
  return 0;

}
