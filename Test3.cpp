#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
   int x, i = 0;

   srand(time(NULL));

   while (i != 60){

    x = 1 + (rand() % 60);
    printf("%d\n", x);

    i++;

    Sleep(1000);

   }

   system("PAUSE");
   return 0;
}
