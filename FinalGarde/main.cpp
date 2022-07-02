#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    float ActualMean, Exam, ActP, ExP, SUM, wanted, neededTW, needed;

    while (true){
        printf("Welcome to your possible final gardes\n");
        printf("Please enter your current grade:\n");
        scanf("%f", &ActualMean);
        printf("Now, enter the grade you think could get in the exam:\n");
        scanf("%f", &Exam);

        ActP = ActualMean * 0.85;
        ExP = Exam * 0.15;
        SUM = ActP + ExP;

        printf("Your final grades would be %f\n \n", SUM);
        printf("Ok, so, enter the final Grades you would like to get:");
        scanf("%f", &wanted);

        neededTW = wanted - ActP;
        needed = neededTW / 0.15;

        if (ActP + 15 < wanted) {
            printf("That's not possible\n");
            printf("You would need to get a %f in the exam\n", needed);
        }else{
            printf("You need to get at least %f in the exam, in order to get %f\n \n", needed, wanted);
        }


        system("PAUSE");
        printf("\n\n\n\n");
    }

    return 0;
}
