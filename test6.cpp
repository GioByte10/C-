#include <iostream>
#include <windows.h>
using namespace std;

int main(){

  ShellExecute(NULL, "open", "MessageBox.vbs", NULL, NULL, SW_SHOWDEFAULT);
  cout << "hh";

}
