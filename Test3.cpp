#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

   int GET (char x){

      if (x == 'a'){
        return 0;
      }if (x == 'b'){
        return 1;
      }if (x == 'c'){
        return 2;
      }if (x == 'd'){
        return 3;
      }if (x == 'e'){
        return 4;
      }if (x == 'f'){
        return 5;
      }

   }

int main(){

  char y;
  string t;

  cin >> y;

  if(GET(y)){
    printf("WORKS\n\n");
  }

  system("PAUSE");
  return 0;

}
