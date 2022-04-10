#include <iostream>
#include <stdio.h>

int main() {

    int g = 8;

    printf("Hello %d\n", g);

    for (int i = 0; i < 10; i++){

        printf("Lonf time no see #%d\n", i);

    }

    printf("Please enter something\n");
    scanf("%d", &g);

    printf("The new value is %d", g);

    return 0;
}
