#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    ShowWindow(GetConsoleWindow(), 0);

	while(true){

        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
        return 0;
    }
  }
}
