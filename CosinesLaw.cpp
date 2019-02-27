#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <math.h>
#include <cmath>

using namespace std;

double CosLawAn(double a, double b, double c, char lett[0], char lett2[0], char lett3[0], char lett4[0]){

    double CosAnR, CosAn1;
    CosAn1 = acos((((pow(a, 2) + pow(b, 2)) - pow(c, 2)) / (2 * a * b)));
    CosAnR = CosAn1 * 57.2958;

    printf(" cos(%c) = (%c^2 + %c^2 - %c^2) / 2%c%c\n", lett4[0], lett2[0], lett3[0], lett[0], lett2[0], lett3[0]);
    printf(" cos(%c) = (%.2f^2 + %.2f^2 - %.2f^2) / 2 (%.2f) (%.2f)\n", lett[0], a, b, c, a, b);
    printf(" cos(%c) = (%.2f + %.2f - %.2f) / %.3f\n", lett[0], pow(a, 2), pow(b, 2), pow(c, 2), 2 * a * b);
    printf(" cos(%c) = (%.2f - %.2f) / %.3f\n", lett[0], pow(a, 2) + pow(b, 2), pow(c, 2), 2 * a * b);
    printf(" cos(%c) = %.2f / %.3f\n", lett[0], (pow(a, 2) + pow(b, 2)) - pow(c, 2), 2 * a * b);
    printf(" cos(%c) = %.3f\n", lett[0], ((pow(a, 2) + pow(b, 2)) - pow(c, 2)) / (2 * a * b));
    printf("      %c = %f\n", lett[0], CosAnR);
    return CosAnR;
}

double CosLaw(double a, double b, double C, double auxX, char lett[0], char lett2[0], char lett3[0], char lett4[0]){

    double cosR;

    cosR = sqrt((pow(a, 2) + pow(b, 2)) - ((2 * a * b) * (cos(auxX))));

    printf(" %c^2 = %c^2 + %c^2 - 2%c%c cos(%c)\n", lett[0], lett2[0], lett3[0], lett2[0], lett3[0], lett4[0]);
    printf(" %c^2 = %.2f^2 + %.2f^2 - 2 (%.2f) (%.2f) cos(%.2f)\n", lett[0], a, b, a, b, C);
    printf(" %c^2 = %.2f + %.2f + (%.3f (%.3f))\n", lett[0], pow(a, 2), pow(b, 2), -2 * a * b, cos(auxX));
    printf(" %c^2 = %.2f + (%.3f)\n", lett[0], pow(a, 2) + pow(b, 2), -2 * a * b * cos(auxX));
    printf(" %c^2 = %.3f\n", lett[0], pow(a, 2) + pow(b, 2) - ((2 * a * b) * (cos(auxX))));
    printf("   %c = %.3f\n \n", lett[0], cosR);
    return cosR;
}

double SinLaw (double C, double b, double c, double auxX, char lett[0], char lett4[0], char lett3[0], char lett6[0]){

  double sinR, sin1;

  sin1 = asin((sin(auxX) * b) / c);
  sinR = sin1 * 57.2958;

  printf(" sin(%c) = sin(%c) (%c) / %c\n", lett6[0], lett4[0], lett3[0], lett[0]);
  printf(" sin(%c) = sin(%.2f) (%.2f) / %.2f\n", lett6[0], C, b, c);
  printf(" sin(%c) = %.2f (%.2f) / %.2f\n", lett6[0], sin(auxX), b, c);
  printf(" sin(%c) = %.3f / %.2f\n", lett6[0], sin(auxX) * b, c);
  printf(" sin(%c) = %.3f\n", lett6[0], (sin(auxX) * b) / c);
  printf("      %c = %.5f\n", lett6[0], sinR);
  return sinR;



}

double RESULT(double A, double B, double C, double a, double b, double c, char lett[0], char lett2[0], char lett3[0], char lett4[0], char lett5[0], char lett6[0]){

    printf("\n <%c = %.4f  <%c = %.4f  <%c = %.4f     %c = %.4f  %c = %.4f  %c = %.4f", lett5[0], A, lett6[0], B, lett4[0], C, lett2[0], a, lett3[0], b, lett[0], c);


}
double Angle(double B, double C){

    double A;
    A = 180 - (B + C);
    return A;

}


int main(){

    double A, B, C, a, b, c, cosR, sinR, auxA, auxB, auxC, FINAL;
    char lett[2], lett2[2], lett3[2], lett4[2], lett5[2], lett6[2];

    printf("\t \t \t \t \t \t \t@GioByte10\n \n \n \n");
    printf(" Welcome to Cosines Law\n");
    a = 0;
    b = 0;
    c = 0;
    A = 0;
    B = 0;
    C = 0;
    cosR = 0;
    sinR = 0;
    auxC = 0;
    auxB = 0;
    auxA = 0;
    printf(" What do you know about your triangle?\n");
    printf(" If you don't know anything, put '0'\n");
    printf(" Sides:\n");
    printf(" a:");
    scanf("%lf", &a);
    printf(" b:");
    scanf("%lf", &b);
    printf(" c:");
    scanf("%lf", &c);
    printf(" Angles\n");
    printf(" A <:");
    scanf("%lf", &A);
    printf(" B <:");
    scanf("%lf", &B);
    printf(" C <:");
    scanf("%lf", &C);

if (!(a != 0 && b != 0 && C != 0 || b != 0 && c != 0 && A != 0 || a != 0 && c != 0 && B != 0 || a != 0 && b != 0 && c != 0)){

    if(C != 0 && b != 0 && c != 0){

            a = b;
            b = c;
            A = C;
            auxA = A / 57.2958;

            lett[0] = 'a';
            lett2[0] = 'b';
            lett3[0] = 'c';
            lett4[0] = 'A';
            lett5[0] = 'B';
            lett6[0] = 'C';

    }else if (B != 0 && b != 0 && c != 0){

            a = c;
            b = b;
            A = B;
            auxA = A / 57.2958;

            lett[0] = 'a';
            lett2[0] = 'c';
            lett3[0] = 'b';
            lett4[0] = 'A';
            lett5[0] = 'C';
            lett6[0] = 'B';


    }else if (A != 0 && a != 0 && b != 0){

            auxB = b;
            b = a;
            a = auxB;
            A = A;
            auxA = A / 57.2958;

            lett[0] = 'c';
            lett2[0] = 'b';
            lett3[0] = 'a';
            lett4[0] = 'C';
            lett5[0] = 'B';
            lett6[0] = 'A';

    }else if (A != 0 && a != 0 && c != 0){

            b = a;
            a = c;
            A = A;
            auxA = A / 57.2958;

            lett[0] = 'b';
            lett2[0] = 'c';
            lett3[0] = 'a';
            lett4[0] = 'B';
            lett5[0] = 'C';
            lett6[0] = 'A';


    }else if (C != 0 && a != 0 && c != 0){

            a = a;
            b = c;
            A = C;
            auxA = A / 57.2958;

            lett[0] = 'b';
            lett2[0] = 'a';
            lett3[0] = 'c';
            lett4[0] = 'B';
            lett5[0] = 'A';
            lett6[0] = 'C';

    }else if (B != 0 && a != 0 && b != 0){

            a = a;
            b = b;
            A = B;
            auxA = A / 57.2958;

            lett[0] = 'c';
            lett2[0] = 'a';
            lett3[0] = 'b';
            lett4[0] = 'C';
            lett5[0] = 'A';
            lett6[0] = 'B';



    }


            B = SinLaw(A, a, b, auxA, lett3, lett6, lett2, lett5);
            C = Angle(A, B);
            auxC = C / 57.2958;
            c = CosLaw(a, b, C, auxC, lett, lett2, lett3, lett4);
            FINAL = RESULT(B, A, C, a, b, c, lett, lett2, lett3, lett4, lett5, lett6);
            printf("\n \n");
}


    else if (!(a !=0 && b != 0 && c != 0)){

            if (a != 0 && b != 0 && C != 0){

                auxC = C / 57.2958;
                lett[0] = 'c';
                lett2[0] = 'a';
                lett3[0] = 'b';
                lett4[0] = 'C';
                lett5[0] = 'A';
                lett6[0] = 'B';

            }else if (b != 0 && c != 0 && A != 0){

              a = b;
              b = c;
              C = A;
              auxC = C / 57.2958;
              lett[0] = 'a';
              lett2[0] = 'b';
              lett3[0] = 'c';
              lett4[0] = 'A';
              lett5[0] = 'B';
              lett6[0] = 'C';

            }else if (a != 0 && c != 0 && B != 0){

              a = a;
              b = c;
              C = B;
              auxC = C / 57.2958;
              lett[0] = 'b';
              lett2[0] = 'a';
              lett3[0] = 'c';
              lett4[0] = 'B';
              lett5[0] = 'A';
              lett6[0] = 'C';

            }




        c = CosLaw(a, b, C, auxC, lett, lett2, lett3, lett4);
        Sleep(100);
        B = SinLaw(C, b, c, auxC, lett, lett4, lett3, lett6);
        Sleep(100);
        A = Angle(B, C);
        FINAL = RESULT(A, B, C, a, b, c, lett, lett2, lett3, lett4, lett5, lett6);
        printf("\n \n");

        /*cosR = sqrt((pow(a, 2) + pow(b, 2)) - ((2 * a * b) * (cos(auxC))));
        printf(" %c^2 = %c^2 + %c^2 - 2%c%c cos(%c)\n", lett[0], lett2[0], lett3[0], lett2[0], lett3[0], lett4[0]);
        printf(" %c^2 = %.2f^2 + %.2f^2 - 2 (%.2f) (%.2f) cos(%.2f)\n", lett[0], a, b, a, b, C);
        printf(" %c^2 = %.2f + %.2f + (%.3f (%.3f))\n", lett[0], pow(a, 2), pow(b, 2), -2 * a * b, cos(auxC));
        printf(" %c^2 = %.2f + (%.3f)\n", lett[0], pow(a, 2) + pow(b, 2), -2 * a * b * cos(auxC));
        printf(" %c^2 = %.3f\n", lett[0], pow(a, 2) + pow(b, 2) - ((2 * a * b) * (cos(auxC))));
        printf("   %c = %.3f\n", lett[0], cosR);*/

      }else if (a !=0 && b != 0 && c != 0){

          lett[0] = 'c';
          lett2[0] = 'a';
          lett3[0] = 'b';
          lett4[0] = 'C';
          lett5[0] = 'A';
          lett6[0] = 'B';

          C = CosLawAn(a, b, c, lett, lett2, lett3, lett4);
          auxC = C / 57.2958;
          B = SinLaw(C, b, c, auxC, lett, lett4, lett3, lett6);
          A = Angle(B, C);
          FINAL = RESULT(A, B, C, a, b, c, lett, lett2, lett3, lett4, lett5, lett6);



      }
   // }

    system("PAUSE");
    return 0;
}
