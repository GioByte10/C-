#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;

int main(){

    int random;

    srand((unsigned)time(0));


        random = (rand()%1000)+1;

        printf("%d", random);
}
