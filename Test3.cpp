#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main(){

    int n, z;


  for(int i = 31; i <= 60; i++){

    printf("mminht");
    n = countDigit(i);
    for(z = 4 - n; z > 0; z--){
        printf("0");
    }
    printf("%d", i);
    printf("@mymail.lausd.net\n");

  }


}
