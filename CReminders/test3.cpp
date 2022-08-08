#include <windows.h>
#include <iostream>
#include <fstream>
#include <list>

void updateList(std::list<std::string> *fileInformation){

    std::ifstream info;
    info.open("info.txt");

    std::string line;

    fileInformation->clear();

    while(getline(info, line)){
        fileInformation->emplace_back(line);
    }
}

int main(){

    std::list<std::string> fileInformation;
    updateList(&fileInformation);

    while(true){
        for(auto &line : fileInformation){
            std::cout << line << std::endl;
        }
        Sleep(10000);
    }
}