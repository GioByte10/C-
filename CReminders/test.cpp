// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <string>

void changePointerValue(int *a){

    int b = 9;

    *a = 10;

}

int main(int argc, char *argv[]){

    int a;
    changePointerValue(&a);

    a = 7;

    if(!a)
        std::cout << "a is 0" << std::endl;

    return 0;
}