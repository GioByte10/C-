#include <stdlib.h>
#include <windows.h>

int main(){

    int random = 0;

    while(true){

        system("taskkill /im minecraft.windows.exe /F");

        random = (7 + rand() % (11)) * 60000;

        Sleep(random);

    }
    return 0;
}
