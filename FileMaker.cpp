#include "math.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void javaIf(string variable){

    string value, print, x = "hhh"
;

   while(true){

   printf("Value: ");
            getline(cin, value);
   printf("print: ");
            getline(cin, print);

	ofstream MakedFile;
	MakedFile.open("MakedFile.txt",ios::app|ios::ate);
	MakedFile << "else if (" << variable << " == " << value << "){" << endl << "   System.out.println(\"" << print << "\");" << endl << "}" << endl << endl;
	MakedFile.close();

	MakedFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	MakedFile << "else if (" << variable << " == " << value << "){" << endl << "   System.out.println(\"" << print << "\");" << endl << "}" << endl << endl;


    }

}

int main()
{
    string variable;
    string options[1][2];
    options[0][0] ="1.-\n   if (variable == value){\n      System.out.println(\"print\");\n\n   }";
    options[0][1] = "else if (variable == value){\n      System.out.println(\"print\");\n\n   }";

    int i = 0;
    int select;

    printf("Please select a language from the following:\n");
    printf("1.- C++\n2.- Java\n");
    scanf("%d", &select);

    if(select == 2){
       printf("   Select the template to use from the following:\n\n");
       printf("%s", options[0][0].c_str());
       scanf("%d", &select);

       if(select == 1){

          cin >> variable;
          printf("\n");
          javaIf(variable);

       }

    }




return 0;
}






/*getline(cin, lett);

	ofstream HighScoreFile;
	HighScoreFile.open("highscores.txt",ios::app|ios::ate);
	HighScoreFile << "else if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	HighScoreFile.close();

	HighScoreFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	HighScoreFile << "else if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	   i++;*/

