#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

  char element[100];


  bool GetLet(string x, int y, int l, bool z){

  if (x[y] == 'A'){
    element[l] = 'A';
    return true;

  }else if (x[y] == 'B'){
    element[l] = 'B';
    return true;

  }else if (x[y] == 'C'){
    element[l] = 'C';
    return true;

  }else if (x[y] == 'D'){
    element[l] = 'D';
    return true;

  }else if (x[y] == 'E'){
    element[l] = 'E';
    return true;

  }else if (x[y] == 'F'){
    element[l] = 'F';
    return true;

  }else if (x[y] == 'G'){
    element[l] = 'G';
    return true;

  }else if (x[y] == 'H'){
    element[l] = 'H';
    return true;

  }else if (x[y] == 'I'){
    element[l] = 'I';
    return true;

  }else if (x[y] == 'J'){
    element[l] = 'J';
    return true;

  }else if (x[y] == 'K'){
    element[l] = 'K';
    return true;

  }else if (x[y] == 'L'){
    element[l] = 'L';
    return true;

  }else if (x[y] == 'M'){
    element[l] = 'M';
    return true;

  }else if (x[y] == 'N'){
    element[l] = 'N';
    return true;

  }else if (x[y] == 'O'){
    element[l] = 'O';
    return true;

  }else if (x[y] == 'P'){
    element[l] = 'P';
    return true;

  }else if (x[y] == 'Q'){
    element[l] = 'Q';
    return true;

  }else if (x[y] == 'R'){
    element[l] = 'R';
    return true;

  }else if (x[y] == 'S'){
    element[l] = 'S';
    return true;

  }else if (x[y] == 'T'){
    element[l] = 'T';
    return true;

  }else if (x[y] == 'U'){
    element[l] = 'U';
    return true;

  }else if (x[y] == 'V'){
    element[l] = 'V';
    return true;

  }else if (x[y] == 'X'){
    element[l] = 'X';
    return true;

  }else if (x[y] == 'Y'){
    element[l] = 'Y';
    return true;

  }else if (x[y] == 'Z'){
    element[l] = 'Z';
    return true;

  }

  if (x[y] == 'a'){
    element[l] = 'a';
return true;
  }else if (x[y] == 'b'){
    element[l] = 'b';
return true;
  }else if (x[y] == 'c'){
    element[l] = 'c';
return true;
  }else if (x[y] == 'd'){
    element[l] = 'd';
return true;
  }else if (x[y] == 'e'){
    element[l] = 'e';
return true;
  }else if (x[y] == 'f'){
    element[l] = 'f';
return true;
  }else if (x[y] == 'g'){
    element[l] = 'g';
return true;
  }else if (x[y] == 'h'){
    element[l] = 'h';
return true;
  }else if (x[y] == 'i'){
    element[l] = 'i';
return true;
  }else if (x[y] == 'j'){
    element[l] = 'j';
return true;
  }else if (x[y] == 'k'){
    element[l] = 'k';
return true;
  }else if (x[y] == 'l'){
    element[l] = 'l';
return true;
  }else if (x[y] == 'm'){
    element[l] = 'm';
return true;
  }else if (x[y] == 'n'){
    element[l] = 'n';
return true;
  }else if (x[y] == 'o'){
    element[l] = 'o';
return true;
  }else if (x[y] == 'p'){
    element[l] = 'p';
return true;
  }else if (x[y] == 'q'){
    element[l] = 'q';
return true;
  }else if (x[y] == 'r'){
    element[l] = 'r';
return true;
  }else if (x[y] == 's'){
    element[l] = 's';
return true;
  }else if (x[y] == 't'){
    element[l] = 't';
return true;
  }else if (x[y] == 'u'){
    element[l] = 'u';
return true;
  }else if (x[y] == 'v'){
    element[l] = 'v';
return true;
  }else if (x[y] == 'x'){
    element[l] = 'x';
return true;
  }else if (x[y] == 'y'){
    element[l] = 'y';
return true;
  }else if (x[y] == 'z'){
    element[l] = 'z';
return true;
  }else if (x[y] == '=' && !z){
    element[l] = '=';
    return true;

  }else if (x[y] == '='){
    return true;

  }

  else if (x[y] == '1'){
    element[l] = '1';
    return true;

  }else if (x[y] == '2'){
    element[l] = '2';
    return true;

  }else if (x[y] == '3'){
    element[l] = '3';
    return true;

  }else if (x[y] == '4'){
    element[l] = '4';
    return true;

  }else if (x[y] == '5'){
    element[l] = '5';
    return true;

  }else if (x[y] == '6'){
    element[l] = '6';
    return true;

  }else if (x[y] == '7'){
    element[l] = '7';
    return true;

  }else if (x[y] == '8'){
    element[l] = '8';
    return true;

  }else if (x[y] == '9'){
    element[l] = '9';
    return true;

  }


  return false;

  }


int main(){

  string equation, elements[10][2];
  int i = 0, j = 0, k = 0, h, l = 0;
  bool cancel = false;

  printf("Welcome to the Photomistry Project Tester In C++ Computer\n");
  printf("PPTCC\n");
  printf("Enter the equation you would like to balance\n");
  getline(cin, equation);
  printf("\n");
  //printf("%d", equation.size());

  for(i = 0; i < equation.size(); i++){
        cancel = false;

        for(h = 0; h < 100; h++){
            element[h] = NULL;
        }
        l = 0;
                while(GetLet(equation, i, l, cancel) && !cancel){

                        if(element[l] == '='){

                                element[l] = NULL;
                                cancel = true;



                        }
                    i++;
                    l++;
                }
                if(GetLet(equation, i - 1, l - 1, cancel)){
                  elements[j][k] = element;
                j++;
                }
                if(cancel){
                    k++;
                    j = 0;
                    if (equation[i] != ' ')
                        i--;
                }
        }


   //printf("%d\n", equations[0].size());
   //cout << elements[0] << endl;

   for (i = 0; 0 != elements[i][0].size(); i++){
    if (elements[i][0] == "O"){
        printf("We think there's a problem, Oxygen is a diatomic element (O2)\n");
  }else if (elements[i][0] == "H"){
        printf("We think there's a problem, Hydrogen is a diatomic element (H2)\n");
  }else if (elements[i][0] == "N"){
        printf("We think there's a problem, Nitrogen is a diatomic element (N2)\n");
  }else if (elements[i][0] == "F"){
        printf("We think there's a problem, Fluorine is a diatomic element (F2)\n");
  }else if (elements[i][0] == "I"){
        printf("We think there's a problem, Iodine is a diatomic element (I2)\n");
  }else if (elements[i][0] == "Cl"){
        printf("We think there's a problem, Chlorine is a diatomic element (Cl2)\n");
  }else if (elements[i][0] == "Br"){
        printf("We think there's a problem, Bromine is a diatomic element (Br2)\n");
  }
   }

printf("Left in the Equation:\n");

  for (i = 0; 0 != elements[i][0].size(); i++){
    cout << elements[i][0] <<endl;
  }
  printf("\n");
  printf("Right in the Equation:\n");

  for (i = 0; 0 != elements[i][1].size(); i++){
    cout << elements[i][1] <<endl;
  }



  system("PAUSE");
  return 0;

}
