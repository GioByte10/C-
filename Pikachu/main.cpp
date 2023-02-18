#include <iostream>

class Pikachu {
public:
    Pikachu() {
        std::cout << "Pikachu ceased not existing" << std::endl;
    }
   void goShower() {
        std::cout << "Pikachu is going to shower" << std::endl;
    }
    void goToSleep() {
        std::cout << "Pikachu is going to sleep" << std::endl;
    }
};

int main() {

    Pikachu pikachu;

    pikachu.goShower();
    pikachu.goToSleep();

    return 0;
}
