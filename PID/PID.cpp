#include "PID.h"
#include <chrono>
#include <cstdio>

PID::PID(double p, double i, double d): kP(p), kI(i), kD(d){}

double PID::calculate(double error) {

    double dt = double(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastTime).count());
    lastTime = std::chrono::steady_clock::now();
    errorIntegral += dt * (error + prevError) / 2;
    prevError = error;

    double calculation = (kP * error) + (kI * errorIntegral);

    if(dt != 0) {
        calculation += (kD * (error - prevError) / dt);
        printf("p: %f i: %f d: %f\n", kP * error, kI * errorIntegral, kD * (error - prevError) / dt);
    }

    return calculation;

}
