#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int numbers[] = {4, 2, 5, 1, 3, 20, 18, 12, 13, 9, 10, 19, 8, 7, 6, 11, 14, 15, 17, 16, 23, 21, 22};
    int pos, aux;

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        pos = i;

        while (pos > 0 && numbers[pos - 1] > numbers[pos]){

            aux = numbers[pos - 1];
            numbers[pos - 1] = numbers[pos];
            numbers[pos] = aux;
            pos --;
        }
    }

    for(int number : numbers){
        printf ("%d\n", number);
    }


    system("PAUSE");
    return 0;
}

