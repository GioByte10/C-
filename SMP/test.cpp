#include <string>
#include <iostream>

int main(){
    std::string s = "Hello World!";

    for(char c: s)
        c = 'a';

    std::cout << s << std::endl;


}