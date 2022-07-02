#include <iostream>
#include <stdio.h>
#include <windows.h>    // WinApi header
using namespace std;    // std::cout, std::cin
int main(){

    HANDLE  hConsole;
	int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(k = 1; k < 255; k++){
    SetConsoleTextAttribute(hConsole, k);
    cout << k <<" I want to be nice today!" << endl;
  }

  cin.ignore();
  return 0;
}
