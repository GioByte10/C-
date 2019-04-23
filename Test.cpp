#include "math.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    string lett;
    int i = 0;

    while(lett != "zab"){

            getline(cin, lett);

	ofstream HighScoreFile;
	HighScoreFile.open("highscores.txt",ios::app|ios::ate);
	HighScoreFile << "if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	HighScoreFile.close();

	HighScoreFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	HighScoreFile << "if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	   i++;

    }

return 0;
}

