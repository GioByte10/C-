#include <stdio.h>
#include <windows.h>

int main(){

  STARTUPINFO StartInfo = {0};
  PROCESS_INFORMATION ProInf = {0};
  int select = 0;
  bool SUCCES;


  printf("\n\t\t\t\t\t\tProtocol Developer\n\n");
  printf(" 1.- Photomistry\n");
  scanf("%d", &select);

  if(select == 1){

  printf(" Implementing Photomistry Protocol\n\n");

  printf(" Calling Android Studio.........................");
  SUCCES = CreateProcess(TEXT("C:\\Program Files\\Android\\Android Studio\\bin\\studio64.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &StartInfo, &ProInf);
  Sleep(500);

  if(SUCCES){
    printf("Status: SUCCESSFUL               ID: %d\n", ProInf.dwProcessId);
  }else{
    printf("Status: FAIL\n");
  }


  printf(" Calling Test4..................................");
  //SUCCES = CreateProcess(TEXT("C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\Test4.cpp"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &StartInfo, &ProInf);
  SUCCES = ShellExecute(NULL, "open", "C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\Test4.cpp", NULL, NULL, SW_SHOWDEFAULT);
  Sleep(500);

  if(SUCCES){
    printf("Status: SUCCESSFUL               ID: UNKOWN\n");
  }else{
    printf("Status: FAIL\n");
  }




  printf(" Calling Classes_dex2.jar.......................");
  SUCCES = ShellExecute(NULL, "open", "C:\\Users\\super\\Downloads\\App\\dex2jar-0.0.9.15\\classes_dex2jar.jar", NULL, NULL, SW_SHOWDEFAULT);
  //CreateProcess(TEXT("C:\\Users\\super\\Downloads\\App\\dex2jar-0.0.9.15\\classes_dex2jar.jar"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &StartInfo, &ProInf);
  Sleep(500);

  if(SUCCES){
    printf("Status: SUCCESSFUL               ID: UNKOWN\n");
  }else{
    printf("Status: FAIL\n");
  }


  printf(" Calling File Explorer..........................");
  system("explorer C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Aplicaciones\\AndroidStudio\\PHTEST");
  printf("Status: SUCCESSFUL               ID: UNKNOWN\n\n");
  //SUCCES = CreateProcessA(TEXT("explorer C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Aplicaciones\\AndroidStudio\\PHTEST"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &StartInfo, &ProInf);
  Sleep(500);


  }
}
