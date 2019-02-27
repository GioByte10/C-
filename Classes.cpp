#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Human{

   public:
       void talk(string x){
          cout << x << endl;
       }

};
int main(){

   printf("Classes class\n\n");

   Human Human;
   Human.talk("poj");

   system("PAUSE");
   return 0;

}
