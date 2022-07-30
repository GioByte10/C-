#include <iostream>

void createBlock(const std::string& bitstream) {
    std::cout << "Creating block... " << bitstream << std::endl;
    bool block[16];

}



int main() {

    std::string bitstream;

    std::cout << "Enter 11 bits: ";
    std::cin >> bitstream;

    if(bitstream.length() != 11){
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    for(int  i = 0; i < 11; i++){
        if(bitstream[i] != '0' && bitstream[i] != '1'){
            std::cout << "Invalid input" << std::endl;
            return 0;
        }
    }

    std::cout << "Bitstream: " << bitstream << std::endl;
}
