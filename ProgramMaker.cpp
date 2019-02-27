#include <stdio.h>     // F functions
#include <stdlib.h>    //Pause; Random
#include <time.h>      //Random
#include <windows.h>     //Sleep; gotoxy; getxy;
#include <iostream>    //Cin; Cout
#include <math.h>      //Math operations
#include <string>
#include <string.h>    //Text cad
#define TAM 50
using namespace std;

class libraries{

   public:
       void stdio(auto f, auto s, auto c){
          printf("#include <stdio.h>");
          if (f == 1)
            printf("\nprintf('%');", s);
          if (f == 2)
            printf("\nscanf('%a')");
       }

};

int main(){

   libraries libraries;

   libraries.stdio(1, "hola", 0);

   printf("\n \n");

   system("PAUSE");
   return 0;

}
