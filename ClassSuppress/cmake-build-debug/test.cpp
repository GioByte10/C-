#include <iostream>
#include <windows.h>
#include <list>

int main(){

    std::list<std::string> times;
    times.emplace_back("hello");

    auto times_i = times.begin();

    std::string line = *times_i;
    line = line.substr(0, 2);

    std::cout << line << std::endl;
    std::cout << *times_i << std::endl;

}