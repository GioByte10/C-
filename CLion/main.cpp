#include <windows.h>
#include <ctime>
#include <string>
using namespace std;

LPCSTR links[15] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};

int info[15][2] = {   //          {hour, minute}

        {10, 0}, {10, 50}, {11, 40}, {12, 55},                    // Monday
        {10, 0}, {10, 55}, {11, 50}, {13, 30}, {14, 25},          // Week Even
        {10, 0}, {10, 55}, {11, 50}, {13, 30}, {14, 25},          // Week Odd
        {7, 0}                                                    // Sunday

};

int days[15][2] = {   //          {day, day, ....}        -1 for null

        {1, -1},  {1, -1}, {1, -1},  {1, -1},
        {2, 4},   {2, 4},  {2, 4},   {2, 4}, {2, 4},
        {3, 5},   {3, 5},  {3, 5},   {3, 5}, {3, 5},
        {0, -1}

};

/*
   0 Sunday
   1 Monday
   2 Tuesday
   3 Wednesday
   4 Thursday
   5 Friday
   6 Sunday

*/

int getTime(const string &t, time_t now, tm *ltm){

    now = time(nullptr);
    localtime(&now);

    if(t == "min")
        return ltm -> tm_min;

    else if(t == "hour")
        return ltm -> tm_hour;

    else if(t == "day")
        return ltm -> tm_mday;

    else if(t == "wday")
        return ltm -> tm_wday;

    else if(t == "month")
        return ltm -> tm_mon;

    else if(t == "year")
        return ltm -> tm_year;

    return -1;

}

bool isToday(int index, time_t now, tm *ltm){

    for(int i = 0; i < sizeof(days[i]) / sizeof(days[i][0]); i++){
        if(days[index][i] == getTime("wday", now, ltm))
            return true;
    }

    return false;
}

int main(){

    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    while(true){
        for(int i = 0; i < sizeof(links) / sizeof(links[0]); i++){

            //printf("%d:%d   %d\n", getTime("hour"), getTime("min"), getTime("wday"));

            if(info[i][0] == getTime("hour", now, ltm) && info[i][1] == getTime("min", now, ltm) && isToday(i, now, ltm)){
                ShellExecute(nullptr, "open", links[i], nullptr, nullptr, 0);
                Sleep(60000);
            }
        }
        Sleep(1000);
    }
}
