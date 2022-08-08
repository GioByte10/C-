#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    bool status = false;
    while (true) {
        if(GetAsyncKeyState(VK_F8)){
            status = !status;
            std::cout << "F8 is pressed" << std::endl;
            while(GetAsyncKeyState(VK_F8));
        }
        std::cout << "F8 is not pressed" << std::endl;
    }
}