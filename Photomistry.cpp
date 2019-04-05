#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#define TAM
using namespace std;

  char element[3];

  bool GetCAP(string x, int y){

  if (x[y] == 'A'){
    element[0] = 'A';
    return true;

  }else if (x[y] == 'B'){
    element[0] = 'B';
    return true;

  }else if (x[y] == 'C'){
    element[0] = 'C';
    return true;

  }else if (x[y] == 'D'){
    element[0] = 'D';
    return true;

  }else if (x[y] == 'E'){
    element[0] = 'E';
    return true;

  }else if (x[y] == 'F'){
    element[0] = 'F';
    return true;

  }else if (x[y] == 'G'){
    element[0] = 'G';
    return true;

  }else if (x[y] == 'H'){
    element[0] = 'H';
    return true;

  }else if (x[y] == 'I'){
    element[0] = 'I';
    return true;

  }else if (x[y] == 'J'){
    element[0] = 'J';
    return true;

  }else if (x[y] == 'K'){
    element[0] = 'K';
    return true;

  }else if (x[y] == 'L'){
    element[0] = 'L';
    return true;

  }else if (x[y] == 'M'){
    element[0] = 'M';
    return true;

  }else if (x[y] == 'N'){
    element[0] = 'N';
    return true;

  }else if (x[y] == 'O'){
    element[0] = 'O';
    return true;

  }

  return false;


  }

  void GetLet(string x, int y){

  if (x[y] == 'a'){
    element[1] = 'a';

  }else if (x[y] == 'b'){
    element[1] = 'b';

  }else if (x[y] == 'c'){
    element[1] = 'c';

  }else if (x[y] == 'd'){
    element[1] = 'd';

  }else if (x[y] == 'e'){
    element[1] = 'e';

  }else if (x[y] == 'f'){
    element[1] = 'f';

  }else if (x[y] == 'g'){
    element[1] = 'g';

  }else if (x[y] == 'h'){
    element[1] = 'h';

  }else if (x[y] == 'i'){
    element[1] = 'i';

  }else if (x[y] == 'j'){
    element[1] = 'j';

  }else if (x[y] == 'k'){
    element[1] = 'k';

  }else if (x[y] == 'l'){
    element[1] = 'l';

  }else if (x[y] == 'm'){
    element[1] = 'm';

  }else if (x[y] == 'n'){
    element[1] = 'n';

  }else if (x[y] == 'o'){
    element[1] = 'o';

  }else if (x[y] == 'p'){
    element[1] = 'p';

  }



  }


int main(){

  string equation, equations[10];
  bool cond;
  int i = 0, j = 0;

  printf("Welcome to the Photomistry Project Tester In C++ Computer\n");
  printf("PPTCC\n");
  printf("Enter the equation you would like to balance\n");
  getline(cin, equation);
  printf("\n");
  //printf("%d", equation.size());

  for(i = 0; i < equation.size(); i++){
        element[0] = NULL;
        element[1] = NULL;
        cond = GetCAP(equation, i);

        if (cond){
            i++;
            GetLet(equation, i);
            equations[j] = element;
            j++;

        }
  }

  for (i = 0; 0 != equations[i].size(); i++){
    cout << equations[i] <<endl;
  }

  system("PAUSE");
  return 0;

}
