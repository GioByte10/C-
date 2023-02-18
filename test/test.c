#include <stdio.h>

void test() {
    static int i = 0;
    i++;
    printf("i = %d\n", i);
}

int main(){

    test();
    test();
    test();
    test();

    return 0;
}