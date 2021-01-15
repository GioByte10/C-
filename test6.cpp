#include <stdlib.h>
#include <windows.h>
#include <string>
using namespace std;

int main(){

    LPCSTR info[2] = {"https://lausd.zoom.us/j/2362879788", "https://lausd.zoom.us/j/23628797880"};

    ShellExecute(0, "open", info[1], NULL, NULL, 0);

    return 0;

}
