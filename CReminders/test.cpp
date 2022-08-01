#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>

void assignValue(int *x){
    *x = 8;
}

int main() {

    int x = 9;

    std::cout << "x = " << x << std::endl;
    assignValue(&x);
    std::cout << "x = " << x << std::endl;

    return 0;
}