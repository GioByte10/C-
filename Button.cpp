#include <fstream>
#include <iostream>
using namespace std;

bool checkCharacter(string txt, char ch){

    for(int i = 0; i < txt.length(); i++){
        if(txt.at(i) == ch)
            return true;
    }

    return false;
}

int main(){

    ifstream read;
    ofstream write;

    string txt = "", line = "";

    read.open("C:\\Program Files (x86)\\MSBuild\\Microsoft\\Windows Workflow Foundation\\Log.txt");
    while(getline(read, line)){
        txt += line + '\n';
    }
    read.close();

    if(!checkCharacter(txt, '@')){
        write.open("C:\\Program Files (x86)\\MSBuild\\Microsoft\\Windows Workflow Foundation\\Log.txt");
        write << txt + "\n.";
        write.close();
    }


    return 0;

}
