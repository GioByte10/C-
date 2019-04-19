#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

  char element[100];
  int character;


  bool GetLet(string x, int y, int l, bool z){

      if(x[y] != ' ' && x[y] != '+'){

  if (x[y] == 'A'){
    element[l] = 'A';
    character = 0;
    return true;

  }else if (x[y] == 'B'){
    element[l] = 'B';
    character = 0;
    return true;

  }else if (x[y] == 'C'){
    element[l] = 'C';
    character = 0;
    return true;

  }else if (x[y] == 'D'){
    element[l] = 'D';
    character = 0;
    return true;

  }else if (x[y] == 'E'){
    element[l] = 'E';
    character = 0;
    return true;

  }else if (x[y] == 'F'){
    element[l] = 'F';
    character = 0;
    return true;

  }else if (x[y] == 'G'){
    element[l] = 'G';
    character = 0;
    return true;

  }else if (x[y] == 'H'){
    element[l] = 'H';
    character = 0;
    return true;

  }else if (x[y] == 'I'){
    element[l] = 'I';
    character = 0;
    return true;

  }else if (x[y] == 'J'){
    character = 0;
    element[l] = 'J';
    return true;

  }else if (x[y] == 'K'){
    character = 0;
    element[l] = 'K';
    return true;

  }else if (x[y] == 'L'){
    character = 0;
    element[l] = 'L';
    return true;

  }else if (x[y] == 'M'){
    character = 0;
    element[l] = 'M';
    return true;

  }else if (x[y] == 'N'){
    character = 0;
    element[l] = 'N';
    return true;

  }else if (x[y] == 'O'){
    character = 0;
    element[l] = 'O';
    return true;

  }else if (x[y] == 'P'){
    character = 0;
    element[l] = 'P';
    return true;

  }else if (x[y] == 'Q'){
    character = 0;
    element[l] = 'Q';
    return true;

  }else if (x[y] == 'R'){
    character = 0;
    element[l] = 'R';
    return true;

  }else if (x[y] == 'S'){
    character = 0;
    element[l] = 'S';
    return true;

  }else if (x[y] == 'T'){
    character = 0;
    element[l] = 'T';
    return true;

  }else if (x[y] == 'U'){
    character = 0;
    element[l] = 'U';
    return true;

  }else if (x[y] == 'V'){
    character = 0;
    element[l] = 'V';
    return true;

  }else if (x[y] == 'X'){
    character = 0;
    element[l] = 'X';
    return true;

  }else if (x[y] == 'Y'){
    character = 0;
    element[l] = 'Y';
    return true;

  }else if (x[y] == 'Z'){
    character = 0;
    element[l] = 'Z';
    return true;

  }

  if (x[y] == 'a'){
    element[l] = 'a';
    character = 1;
return true;
  }else if (x[y] == 'b'){
    character = 1;
    element[l] = 'b';
return true;
  }else if (x[y] == 'c'){
    character = 1;
    element[l] = 'c';
return true;
  }else if (x[y] == 'd'){
    character = 1;
    element[l] = 'd';
return true;
  }else if (x[y] == 'e'){
    character = 1;
    element[l] = 'e';
return true;
  }else if (x[y] == 'f'){
    character = 1;
    element[l] = 'f';
return true;
  }else if (x[y] == 'g'){
    character = 1;
    element[l] = 'g';
return true;
  }else if (x[y] == 'h'){
    character = 1;
    element[l] = 'h';
return true;
  }else if (x[y] == 'i'){
    character = 1;
    element[l] = 'i';
return true;
  }else if (x[y] == 'j'){
    character = 1;
    element[l] = 'j';
return true;
  }else if (x[y] == 'k'){
    character = 1;
    element[l] = 'k';
return true;
  }else if (x[y] == 'l'){
    character = 1;
    element[l] = 'l';
return true;
  }else if (x[y] == 'm'){
    character = 1;
    element[l] = 'm';
return true;
  }else if (x[y] == 'n'){
    character = 1;
    element[l] = 'n';
return true;
  }else if (x[y] == 'o'){
    character = 1;
    element[l] = 'o';
return true;
  }else if (x[y] == 'p'){
    character = 1;
    element[l] = 'p';
return true;
  }else if (x[y] == 'q'){
    character = 1;
    element[l] = 'q';
return true;
  }else if (x[y] == 'r'){
    character = 1;
    element[l] = 'r';
return true;
  }else if (x[y] == 's'){
    character = 1;
    element[l] = 's';
return true;
  }else if (x[y] == 't'){
    character = 1;
    element[l] = 't';
return true;
  }else if (x[y] == 'u'){
    character = 1;
    element[l] = 'u';
return true;
  }else if (x[y] == 'v'){
    character = 1;
    element[l] = 'v';
return true;
  }else if (x[y] == 'x'){
    character = 1;
    element[l] = 'x';
return true;
  }else if (x[y] == 'y'){
    character = 1;
    element[l] = 'y';
return true;
  }else if (x[y] == 'z'){
    character = 1;
    element[l] = 'z';
return true;
  }else if (x[y] == '=' && !z){

    element[l] = '=';
    character = 0;
    return true;

  }else if (x[y] == '='){
      character = 0;
    return true;

  }else if(l > 0 ){

    if (x[y] == '0'){
    character = 2;
    element[l] = '0';
    return true;

    }else if (x[y] == '1'){
    character = 2;
    element[l] = '1';
    return true;

  }else if (x[y] == '2'){
    character = 2;
    element[l] = '2';
    return true;


   }else if (x[y] == '1'){
    character = 2;
    element[l] = '1';
    return true;

  }else if (x[y] == '2'){
    character = 2;
    element[l] = '2';
    return true;

  }else if(x[y] == '3'){
    character = 2;
    element[l] = '3';
    return true;

  }else if (x[y] == '4'){
    character = 2;
    element[l] = '4';
    return true;

  }else if (x[y] == '5'){
    character = 2;
    element[l] = '5';
    return true;

  }else if (x[y] == '6'){
    character = 2;
    element[l] = '6';
    return true;

  }else if (x[y] == '7'){
    character = 2;
    element[l] = '7';
    return true;

  }else if (x[y] == '8'){
    character = 2;
    element[l] = '8';
    return true;

  }else if (x[y] == '9'){
    character = 2;
    element[l] = '9';
    return true;

  }
  }



  return false;
      }else{

         return false;

      }

  }


int main(){

  string equation, elements[100][2], advice, aux, Relements[100][2];
  int i = 0, j = 0, k = 0, h = 0, l = 0, p = 0;
  bool cancel = false;

  char Cequation[100];

  printf("Welcome to the Photomistry Project Tester In C++ Computer\n");
  printf("PPTCC\n");
  printf("Enter the equation you would like to balance\n");
  getline(cin, equation);
  printf("\n");

  for(i = 0; i < equation.size(); i++){
            if(equation[i] == '='){
                cancel = true;
                break;
            }
        }

        if (cancel){

  for(i = 0; i < equation.size(); i++){
        cancel = false;

        for(h = 0; h < 100; h++){
            element[h] = NULL;
        }
        l = 0;
                while(i < equation.size() && !cancel && GetLet(equation, i, l, cancel)){

                        if(l == 0 && character != 0){
                            goto END1;
                        }

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
                    if (equation[i] != ' '){
                        i--;
                    }
                }
        }

        if (!(0 != elements[0][1].size())){
            goto END;
        }

        l = 0;
        j = 0;

        equation = "";

            for (i = 0; 0 != elements[i][1].length(); i++) {

                l++;

            }

            for (i = 0; 0 != elements[i][0].length(); i++) {

                j++;

            }


            for (h = 0; h < 2; h++) {
                for (i = 0; 0 < elements[i][h].length(); i++) {

                    equation += elements[i][h];

                    if (h == 0 && i == j - 1) {
                        equation += " = ";

                    } else if (!(h == 1 && i == l - 1)) {
                        equation += " + ";
                    }

                }

            }

            cancel = false;

            cout << equation << endl;
            printf("\n");

for (h = 0; h < 2; h++){

        advice = "we think there's a problem, ";

   j = 0;
   k = 0;
   l = 0;

   /*for(i = 0; 0 < elements[i][h].size(); i++){
    l++;
   }*/


   for(i = 0; 0 < elements[i][h].size(); i++){
    if (elements[i][h] == "O" || elements[i][h] == "N" || elements[i][h] == "F" || elements[i][h] == "H" || elements[i][h] == "Br" || elements[i][h] == "Cl" || elements[i][h] == "I"){
       k++;
       cancel = true;
    }

   }

   for (i = 0; 0 != elements[i][h].size(); i++){

        if (j == k - 1 && j > 0){
           advice += "and ";
        }


    if (elements[i][h] == "O"){
        advice += "Oxygen (O2) ";
        j++;
  }else if (elements[i][h] == "H"){
        advice += "Hydrogen (H2) ";
        j++;
  }else if (elements[i][h] == "N"){
        advice += "Nitrogen (N2) ";
        j++;
  }else if (elements[i][h] == "F"){
        advice += "Fluorine (F2) ";
        j++;
  }else if (elements[i][h] == "I"){
        advice += "Iodine (I2) ";
        j++;
  }else if (elements[i][h] == "Cl"){
        advice += "Chlorine (Cl2) ";
        j++;
  }else if (elements[i][h] == "Br"){
        advice += "Bromine (Br2) ";
        j++;
  }

   }

   if (j > 1){
    advice += "are diatomic elements";
   }else if (j == 1){
    advice += "is a diatomic element";
   }
if (j > 0){

    if(h == 0){
   cout << "In the left side of the equation, " << advice << endl;
   printf("\n\n");
    }else if (h == 1){
   cout << "In the right side of the equation, " << advice << endl;
   printf("\n\n");
    }else{

       printf("There is a real Problem\n");

    }

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

  printf("\n\n");


  if (!cancel){

        cancel =  false;
        character = 3;

  for(h = 0; h < 2; h++){
        p = 0;

    for(i = 0; 0 != elements[i][h].size(); i++){

        l = 0;
        k = 0;

        for(j = 0; j < elements[i][h].size(); j++){

            while(GetLet(elements[i][h], j, l, cancel) && !cancel){

                j++;
                l++;

                if(character == 0){
                        character = 3;
                    k++;

                }
                if(k > 1){
                        element[l] = NULL;
                        j--;
                        break;
                    }

            }

           if(GetLet(elements[i][h], j - 1, l -1, cancel)){
            Relements[p][h] = element;
            p++;
           }

        }
    }
  }

  for (i = 0; 0 != Relements[i][0].size(); i++){
    cout << Relements[i][0] << endl;
  }
  for (i = 0; 0 != Relements[i][1].size(); i++){
    cout << Relements[i][1] << endl;
  }

  }
        }else{

            END:

           printf("The equation has reactives but no products\n");

        }

        if(false){

        END1:
            printf("The equation can't be balanced\n");
        }

  system("PAUSE");
  return 0;

}
