#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

   double goal, actual, auxg, auxa;
   actual = 0;

   printf("Welcome to the turtle paradox");
   printf("How many meters would it move?");
   scanf("%lf", &goal);
   printf("Starting calculating...");
   auxg = goal;

   while (actual < goal){

       printf("Your actual distance is %.100f\n", actual);
       auxa = auxg / 2;
       auxg = auxg / 2;
       actual += auxa;



   }

   system("PAUSE");
   return 0;
}
