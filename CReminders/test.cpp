#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>

bool findChars(const std::string &line, const std::string &chars){

    if(std::ranges::any_of(line, [chars](char c){
        return chars.find(c) != std::string::npos;
    }))

    return false;

}


int main() {
    std::string line;
    std::string chars;
    std::cout << "Enter a line: ";
    std::getline(std::cin, line);
    std::cout << "Enter a string of characters: ";
    std::getline(std::cin, chars);
    std::cout << "The line contains the characters: " << findChars(line, chars) << std::endl;
    return 0;
}