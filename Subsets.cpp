#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define TAM 207085
using namespace std;

class math{

   public:

       void DataNum(int x){
          args = x;
       }

       void ListNum(int args, int y[500]){


           for(int i = 0; i < args; i++){

               numbers[i] = y[i];
               //printf("%d\n", numbers[i]);

           }

       }
       void randoms(){


           printf("%d", args);
           int random, j, i, k, test[3];
           for(j = 0; j < ((args * (args - 1) * (args - 2)) / 6); j++){
           for(i = 0; i < 3; i++){
           srand ((time (NULL)) * 7);
           random = 0 + rand() % (args);

           test[i] = random;
           if (i == 1){
             if (test[i - 1] == test[i])
                i--;
             }else if(i >= 2){
                if (test[i - 1] == test[i] || test[i - 2] == test[i])
                    i--;
             }

           //printf("%d", j);
           }
           combinations[j] = numbers[test[0]] + numbers[test[1]] + numbers[test[2]];
           printf("%d\n", combinations[j]);
           if (j > 0){
            for(k = 0; k < j; k++){
                if (combinations[j] == combinations[k])
                    j--;
            }
           }
           }
           for(j = 0; j < ((args * (args - 1) * (args - 2)) / 6); j++){
               printf("%d\n", combinations[j]);
           }





       }

   private:
    int args;
    int numbers[500];
    long long combinations[TAM];

};

const vector<string> explode(const string& s, const char& c)
{
	string buff{""};
	vector<string> v;

	for(auto n:s)
	{
		if(n != c) buff+=n; else
		if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);

	return v;
}

int main()
{
    math math;
    string str, num, num2;
    char numc[500], num2c[50];
    int i = 0;
	int Line1[2];

	printf("Enter the integers N and P separated by a comma\n");
	cin >> str;


	vector<string> v{explode(str, ',')};

	for(auto n:v){

        if (i == 0)
            num = n;

        if (i == 1)
            num2 = n;

        i++;
	}

	for(i = 0; i < num.length(); i++)
	   numc[i] = num[i];
    for(i = 0; i < num2.length(); i++)
	   num2c[i] = num2[i];

    Line1[0] = atoi(numc);
    Line1[1] = atoi(num2c);

    int Line2[Line1[0]];

    printf("Now, enter the N comma separated integers\n");

    for(i = 0; i < Line1[0]; i++){

        printf("Line 1: %d   i: %d\n", Line1[0], i);
        scanf("%d", &Line2[i]);

    }
    math.DataNum(Line1[0]);
    math.ListNum(Line1[0], Line2);
    math.randoms();


    system("PAUSE");
	return 0;
}
