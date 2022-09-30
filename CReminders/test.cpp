// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <string>


int main(){

    std::string s = "";

    if(s.length())
        std::cout << "s is not empty" << std::endl;

    std::cout << "s is empty" << std::endl;

    else {
        std::cout << "s is empty" << std::endl;
        std::cout << "s.length() = " << s.length() << std::endl;
    }


    return 0;
}