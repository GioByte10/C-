#ifndef PID_PID_H
#define PID_PID_H
#include <chrono>


class PID {
public:

    double kP;
    double kI;
    double kD;

    double errorIntegral = 0;
    double prevError = 0;
    std::chrono::time_point<std::chrono::steady_clock> lastTime = std::chrono::steady_clock::now();

    bool debug = false;

    PID(double kP, double kI, double kD);

    double calculate(double error);

};


#endif
