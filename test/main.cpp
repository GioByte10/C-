#include <stdio.h>
#include <string>

int main(){

    static int i = 0;

    for(i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    return 0;
}