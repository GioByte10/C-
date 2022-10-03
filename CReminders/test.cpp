// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <string>


int main(){


    std::string d = "hello";

    if(d.find("llo") != std::string::npos)
        std::cout << d.find("llo") << std::endl;

    return 0;
}