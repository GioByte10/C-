#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void reset(string s, auto file){

    file << s;
    file.close();

}

int main(){

    string line, sDay;
    ifstream read("Log.txt");
    ofstream write("Log.txt");

    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    int day = aTime->tm_mday;
    //std::string s = std::to_string(42);

    getline(read, line);

    if(line != sDay){
        reset(sDay, write);
    }

    cout << line;

    while(true){

        system("taskkill /im minecraft.windows.exe /F");
        Sleep(1000);

    }

    return 0;
}
