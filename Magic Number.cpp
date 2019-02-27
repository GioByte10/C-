#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    long long random;
    long long number;
    long long maxium;
    long counter = 1;
    int still;

    printf ("\t \t t #Created by Giovanni");
 start:
    srand(time (NULL));
    printf ("Enter the max number\n");
    scanf("%lld", &maxium);
    random = 1 + rand() % (maxium);
    printf("%d", random);
    printf ("Try to guess the Secret number from 1 to %lld\n", maxium);

    while(number != 0){

    //start:
        scanf("%lld", &number);
        if (number < random){
            printf("Enter a bigger number\n \n");

        }else if (number > random){
        printf ("Enter a smaller number\n \n");

        }else if (number == random){
        printf ("Oooh Wooow! It seems like we have a Winner!\n");
        printf ("It took you %ld attemps\n \n \n", counter);
        printf ("Continue playing? 1 for Yes, 0 for No\n");
        scanf ("%d", &still);
          if (still == 1){
            counter = 1;
            goto start;
          }else
          break;
        }
        counter++;
    }

    printf ("Thanks for playing ;) \n \n \n");


    system("PAUSE");
    return 0;
}
