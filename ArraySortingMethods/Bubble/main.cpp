#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int num[] = {2,5,1,4,3};
    int i, j, k, aux;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (num[j] > num[j+1]){

                //printf("%d\n", j);

                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;

            }
        }
    }


    for (k = 0; k <= 4; k++){
        printf("%d", num[k]);
    }

    printf ("\n");

    system("PAUSE");
    return 0;

}
