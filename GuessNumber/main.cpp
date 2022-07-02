#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    long long random;
    long long number = -1;
    long long maximum;
    long counter = 1;
    int still = 1;

    printf ("\t \t t #Created by Giovanni\n");

    while(still) {

        srand(time (nullptr));
        printf ("Enter the max number\n");
        scanf("%lld", &maximum);
        random = 1 + rand() % (maximum);
        //printf("\n%d", random);
        printf ("Try to guess the Secret number from 1 to %lld\n", maximum);

        while (true) {

            scanf("%lld", &number);
            if (number < random) {
                printf("Enter a bigger number\n \n");

            } else if (number > random) {
                printf("Enter a smaller number\n \n");

            } else if (number == random) {
                printf("Oooh Wooow! It seems like we have a Winner!\n");
                printf("It took you %ld attemps\n \n \n", counter);
                printf("Continue playing? 1 for Yes, 0 for No\n");
                scanf("%d", &still);
                break;
            }
            counter++;
        }
    }

    printf ("Thanks for playing ;) \n \n \n");


    system("PAUSE");
    return 0;
}
