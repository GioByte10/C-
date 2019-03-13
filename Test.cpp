#include "math.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    char lett;
    int i = 0;

    while(lett != 'z'){

            scanf("%c", &lett);

	ofstream HighScoreFile;
	HighScoreFile.open("highscores.txt",ios::app|ios::ate);
	HighScoreFile << "ABC[" << i << "] = '" << lett << "';";
	HighScoreFile.close();

	HighScoreFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	HighScoreFile << "ABC[" << i << "] = '" << lett << "';";

	   i++;

    }

return 0;
}

