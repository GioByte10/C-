#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

   ofstream FILE;
   char cond;
   float i = 0;
   int j = 2;

   printf("Int the int");
   scanf("%f", &i);
   j = (i + 0.5) * 2;


   ifstream FILEO ("DataSync.txt");
   string line;

   FILE.open ("DataSync.txt");

   while(cond != 'z'){

   scanf("%c", &cond);
   if (i == 1 || i == j / 2){

   FILE << "  ABC[" << i << "] = '" << cond << "';\n";

   }

   i = i + 0.5;
   j++;

   }
   FILE.close();

   if(FILEO.is_open()){
    while(getline(FILEO, line)){
        cout << "Written:" << line << endl;
    }

    FILEO.close();

   }else{
      printf("ERROR");
   }

   system("PAUSE");
   return 0;

}
