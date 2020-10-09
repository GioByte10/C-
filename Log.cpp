#include <time.h>
#include <thread>
#include <chrono>
using namespace std;

int main(){

    string line, sDay, txt;

    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    int day = aTime->tm_hour;

    cout << day;


    return 0;
}
