#include <time.h>
#include <thread>
#include <chrono>
#include <windows.h>
using namespace std;

int main(){

    ShellExecute(NULL, "open", "C:\\Users\\super\\Desktop\\Giovanni\\Extra\\Un\\chart.xlsx", NULL, NULL, SW_SHOWDEFAULT);
    std::this_thread::sleep_for(std::chrono::hours(1));

    while(true){

        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);

        int hour = aTime->tm_hour;

        if(hour == 9 || hour == 16 || hour == 22 || hour == 24){
            ShellExecute(NULL, "open", "C:\\Users\\super\\Desktop\\Giovanni\\Extra\\Un\\chart.xlsx", NULL, NULL, SW_SHOWDEFAULT);
            std::this_thread::sleep_for(std::chrono::hours(1));
        }else{
            std::this_thread::sleep_for(std::chrono::hours(1));
        }

    }


    return 0;
}
