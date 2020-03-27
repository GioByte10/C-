#include <stdio.h>
#include <stdlib.h>

int main(){

  double time = 0, distance = 0, speed, accel, extra;



  printf("Enter the following values:\n");
  printf("Speed:");
  scanf("%lf", &speed);
  printf("Accel:");
  scanf("%lf", &accel);
  printf("Extra:");
  scanf("%lf", &extra);

  printf("Time = %lf\nDistance = 0   Speed = %lf   Accel = %lf   Extra = %lf\n \n", time, speed, accel, extra);


  for(time = 1; time <= 10; time++){

     distance += speed;
     printf("Time = %.0lf\nDistance = %.3lf   Speed = %.3lf   Accel = %.3lf   Extra = %.3f\n \n", time, distance, speed, accel, extra);

  }



}
