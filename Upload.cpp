#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
int main(){

  int selec;

  printf("Vas a subir un codigo? 1 = Si; 0 = No");
  scanf("%d", &selec);

  if (selec == 1){

    system("C:\\WinCap\\CHidden\\Upload.cmd");
  }else{
      printf("Terminando");
      system("PAUSE");
      return 0;
  }
      system("PAUSE");
      return 0;

}
