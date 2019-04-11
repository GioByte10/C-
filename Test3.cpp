#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  string x = "H + O = H2O";
  char y [100];
  int j = x.size();

  for (int i = 0; i < x.size(); i++){
    y[i] = x[i];
  }

  for (int i = 0; i < x.size(); i++){
  x[i] = '\0';
  }

  for (int i = 0; i < j + 1; i++){

        x += y[i];

    if (y[i] = 'O' || y[i] == 'H'){
        x += "2";
  i++;
    }
  }

  cout << x << endl;

  system("PAUSE");
  return 0;

}
