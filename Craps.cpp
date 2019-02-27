#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;

int roll_dice (void)
    {
        int dice1, dice2, sum, c;
        c = 0;
        srand(time(NULL));

        while(c <= 10){

        printf(".");
        Sleep(200);

        c++;
   }

        dice1 = 1 + (rand() % 6);
        dice2 = 1 + (rand() % 6);
        sum = dice1 + dice2;
        printf("Your dice are %d & %d, suming %d\n", dice1, dice2, sum);
        return sum;
    }


int main()
{

    int c, sum, game, point;



   printf("Welcome to the Craps Game! \n \n");
   printf("So, rules are easy, you are gonna roll 2 Dices, if in the first roll tha sum of them is 7 or 11 you win, if you roll 2, 3 or 12 you lose, else, if you roll 4, 5, 6, 8, 9 or 10 that number becomes your point and is the sum you need to roll in order to win, else if you roll 7 you lose \n \n");

   while (true){

   printf("Lets play\n");
   printf("Press 'Enter' to roll the Dice");
   printf("\n");

   system("PAUSE");


   sum = roll_dice();
   Sleep(2000);

   switch(sum)
   {


       case 7: case 11:
           game = 1;
           break;
       case 2: case 3: case 12:
           game = 2;
           break;
       default:
        game = 3;
        point = sum;
        printf("Yor point is %d\n \n", point);
        break;
   }

   while (game == 3)
    {
        system("PAUSE");
        sum = roll_dice();
        if (sum == 7){
            game = 2;
        }
        if (sum == point){
            game = 1;
        }
    }

    if (game == 1){
        printf("You Win! :)\n \n \n");
    }

    if (game == 2){
        printf("You lose :(\n \n \n");
    }
   }


   system("PAUSE");
   return 0;
}

