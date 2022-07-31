#include <iostream>
#include <chrono>
#include <thread>
#include <functional>
#include <windows.h>

static bool stop = false;

void doWorkDetached(){

    std::cout << "Doing detached work" << std::endl;
    Sleep(1000);

    std::cout << "Doing detached work" << std::endl;
    Sleep(1000);

    std::cout << "Doing detached work" << std::endl;
    Sleep(1000);

}

void loadingScreen(){

    std::cout << "Loading program";
    while(!stop){
        std::cout << '.';
        Sleep(1000);
    }
    std::cout << std::endl;
}

int main(){

    std::thread t1(loadingScreen);

    std::cin.get();
    stop = true;

    t1.join();

    std::thread t2(doWorkDetached);
    t2.detach();

    Sleep(500);

    std::cout<< "printing from main" << std::endl;

    Sleep(3000);

    return 0;
}