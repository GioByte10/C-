#include <stdio.h>
#include <stdlib.h>
using namespace std;

int minn, maxx, digits[4];

   void sortArray(){

       int temp, aux;

   for(int i = 0; i < 4; i++){

       minn = digits[i];

       for(int j = i; j < 4; j++){

           if(digits[j] < minn){

               digits[i] = digits[j];
               digits[j] = minn;
               minn = digits[i];

           }
       }
   }

      minn = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
      maxx = digits[3] * 1000 + digits[2] * 100 + digits[1] * 10 + digits[0];

   }

int main(){

    int number = 0, n = 0;

    printf("6174, also known as Kaprekar's constant after the Indian mathematician.\nThis number is notable for this rule:\n");
    printf("Take any four-digit number [-9999, 9999], using at least two different digits. \n(Leading zeros are allowed.) Arrange the digits in descending and then in ascending order to get two four-digit numbers,\nadding leading zeros if necessary. Subtract the smaller number from the bigger number. \nRepeat.");


  while(n <= 9999){
  printf("Enter a 4 digit number\n");
  //scanf("%d", &number);
  n++;
  number = n;

  for(int j = 0; j < 10; j++){

     for(int i = 0; i < 4; i++){

       digits[i] = number % 10;
       number /= 10;


     }



     sortArray();

     number = maxx - minn;

     printf("%d - %d = %d\n", maxx, minn, number);


  }

  printf("\n");

  }



  system("PAUSE");
  return 0;

}
