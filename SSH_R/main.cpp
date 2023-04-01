#include <iostream>
#include <string>

void modify(std::string &message, int key[], bool encrypt){
    std::string output;
    if (encrypt)
        for (int i = 0; i < message.length(); i++) {
            output += std::to_string(message[i] + key[i]);
        }

    else
        for (int i = 0; i < message.length(); i++) {
            output += message[i] - key[i];
        }


}

int main() {

    std::string message = "Hello, World!";
    std::cout << "Original message: " << message << std::endl;
    modify(message, true);
    std::cout << "Encrypted message: " << message << std::endl;

    return 0;
}
