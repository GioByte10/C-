#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;

int main()
{
    char text[100];
    char text2[100];
    char cancel[] = "-";
    bool cond = true;

while (cond){



    printf ("Enter a text:: ");
    scanf ("%s", &text);

    if (!(strcmp(text, cancel))){

        cond = false;
        break;
    }
    printf ("Enter another text:: ");
    scanf ("%s", &text2);
    printf("\n");

    /*if (strcmp(text, text2) == 0){
        printf ("Both are equal\n \n");

    }else {
      printf("They are different\n \n");
    }*/

    if (strcmp(text, text2) > 0){
        printf("%s is alphabetically higher than %s \n \n", text, text2);
    }else{
     printf ("%s is alphabetically higher than %s \n \n", text2, text);
    }

}

    system("PAUSE");
    return 0;
}
