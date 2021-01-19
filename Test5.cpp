#include <windows.h>
#include <ctime>
#include <string>
using namespace std;

time_t now = time(nullptr);
tm *ltm = localtime(&now);

int main(){

  ShellExecute(0, "open", "google.com", NULL, NULL, 0);

}
