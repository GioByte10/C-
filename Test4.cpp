#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main(){

  char t[2];
  string x;
  t[0] = 'A';
  t[1] = 'b';

  /*stringstream ss;
  ss << t;
  ss >> x;*/

 //printf("%d", sizeof(t));

  for(int i = 0; i < sizeof(t); i++){

    x+=t[i];

  }

  cout << x << endl;

  system("PAUSE");
  return 0;

}
