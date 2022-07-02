#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int sel;
    float deg, rad, aux, result, minu, sec;

    printf("Enter the format you want to make\n1.-Convert x^ to radians\n2.-Convert y radians to degrees");
    printf("\n");
    scanf("%d", &sel);
    printf("\n");

    if (sel == 1)
    {
        degrees:
        while (true){
        printf("Enter the degrees\n");
        scanf("%f", &deg);
        if(deg == -2)
            goto radians;
        printf("%f", deg * (3.1416 / 180));
        printf("\n \n");
        }
    }

    if (sel == 2)
    {
        radians:
        while (true){
        printf("Enter the radians\n");
        scanf("%f", &rad);
        if (rad == -1)
            goto degrees;
        result = rad * (180 / 3.1416);
        aux = floor(result);
        printf("%.0f", aux);
        minu = (result - aux) * 60;
        aux = floor(minu);
        printf(" %.0f'", aux);
        sec = (minu - aux) * 60;
        printf(" %.3f''", sec);
        printf("\n \n");
        }
    }

    system ("PAUSE");
    return 0;
}
