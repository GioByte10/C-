#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

void processing (){

   for(int i = 0; i < 6; i++){

       printf(".");
       Sleep(400);

   }
   printf("\n");
}

/*string color(string w, string colr, HANDLE hConsole2){


   if (colr == "RED"){
    SetConsoleTextAttribute(hConsole2, 12);
    cout << w;
   }else if (colr == "BLUE"){
    SetConsoleTextAttribute(hConsole2, 9);
    cout << w;
   }else if (colr == "GREEN"){
    SetConsoleTextAttribute(hConsole2, 10);
    cout << w;
   }else if (colr == "YELLOW"){
    SetConsoleTextAttribute(hConsole2, 14);
    cout << w;
   }else if (colr == "LBLUE"){
    SetConsoleTextAttribute(hConsole2, 11);
    cout << w;
   }

   SetConsoleTextAttribute(hConsole2, 15);

}*/

int main(){

  string motorN;
  double Diameter = 0, Force = 0, Sfree = 0, Tstall = 0, Ifree = 0, Istall = 0, Voltage = 0, Torque = 0, Current = 0, Speed = 0, Power = 0, Efficiency = 0, Circumference = 0, NRevolutions = 0, RPower = 0, cases = 0, j = 1, i = 1;
  const double PI = 3.14159265;
  int Distance = 0;
  double Time[3];
  bool excess = false;
  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 15);

  printf("Welcome to the MoPCa Project, or Motor Properties Calculator\n\n");
  printf("Please choose a motor to use in the Virtual Test\n");
  printf("1.- CIM Motor\n");
  cin >> motorN;

  if(motorN == "CIM"){

    printf("\n");
    printf("     CIM Motor: 217-2000\n");
    printf("Free Speed =    5330 RPM\n");
    printf("Stall Torque =  2.41 N * m\n");
    printf("Free Current =  2.7 Amp\n");
    printf("Stall Current = 131 Amp\n");
    printf("Maximum Power = 337 W\n\n");

    Sfree = 5330;
    Tstall = 2.41;
    Ifree = 2.7;
    Istall = 131;
    Voltage = 12;

  }else{

     goto endp;

  }

    printf("Enter the distance you want to travel (m)\n");
    scanf("%d", &Distance);
    printf("How many cases do you want to calculate?\n");
    scanf("%lf", &cases);
    printf("Enter the Diameter (m)\n");
    scanf("%lf", &Diameter);
    Circumference = Diameter * PI;
    NRevolutions = Distance / Circumference;
    printf("Enter the Force (N)\n");
    scanf("%lf", &Force);
    Torque = (Diameter / 2) * Force;
    printf("The Torque = %f\n\n", Torque);

    printf("Checking");
    processing();
    printf("\n");


    while (Torque > Tstall){

            j++;
        Torque = Torque * (j - 1);
        Torque /= j;
        excess = true;
    }

     i = j;
     cases += i;


   printf("STATUS: ");
        printf("SUCCESSFUL");
        printf("\n");
        printf("The ");
        printf("Tstall");
        printf(" is GREATER than the required ");
        printf("Torque");
        printf(".\n\n");


        printf("Calculating");
        processing();
        printf("\n");

        for(; i < cases; i++){

                if(i > 1){
                    if(excess){
                    Torque *= i;

                    }else{
                        Torque = Torque * (i - 1);
                    }
                    printf("%lf   %lf\n", Torque, i);
                    Torque /= i;

                    printf("Relation 1:%0.0lf       Torque = %lf\n", i, Torque);
                    excess = false;

                }


        Current = (((Istall - Ifree) / Tstall) * Torque) + Ifree;
        Speed = (-(Sfree / Tstall) * Torque) + Sfree;
        Power = (PI * Speed * Torque) / 30;
        Efficiency = (Power / (Current * Voltage));
        Speed = Speed * Efficiency;

        if(i > 1){
            Speed /= i;
        }

        Time[0] = (NRevolutions / Speed) * 60;
        Time[1] = NRevolutions / Speed;
        Time[2] = (NRevolutions / Speed) / 60;

        RPower = (Current * Voltage) * Time[2];

        cout << "Current =      " << Current << " Amp" << endl;
        cout << "Speed =        " << Speed << " RPM";
        cout << "       Necessary Revolutions = " << NRevolutions << endl;
        cout << "M Power =      " << Power << " W" << endl;
        cout << "E Power =      " << Current * Voltage << " W" << endl;
        cout << "Efficiency =   " << Efficiency * 100 << " %" << endl;
        printf("\n");

        cout << "Required Power = " << RPower << " W";
        printf("\tSeconds = %lf\tMinutes = %lf\tHours = %lf\n\n\n", Time[0], Time[1], Time[2]);

        }


    endp:

  system("PAUSE");
  return 0;

}
