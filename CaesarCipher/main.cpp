#include <iostream>
#include <string.h>

int main(){

    std::string word;
    std::cin >> word;

    if(word == "codestartup"){
        printf("Hello");
        std::cin >> word;

        if(word == "-1"){
            std::cin >> word;
            printf("%s", word.c_str());
    }


    return 0;
}