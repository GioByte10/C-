#include <iostream>
#include <cmath>
#include "PID.h"
#include <windows.h>

int main() {

    int setPoint = 27;
    double control = 0;
    double rate = 0;
    PID pid(0.1, 0.005, 1);


    while(true){
        int error = int(setPoint - pow(control, 3));
        rate = pid.calculate(error);
        control += rate;
        printf("control: %f\n", control);
        //Sleep(1000);
    }
}
