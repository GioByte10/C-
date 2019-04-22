#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

   bool GET (char x){

      if (x == 'a'){
        return true;
      }if (x == 'b'){
        return 1;
      }if (x == 'c'){
        return true;
      }if (x == 'd'){
        return true;
      }if (x == 'e'){
        return true;
      }if (x == 'f'){
        return true;
      }

      return false;

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
