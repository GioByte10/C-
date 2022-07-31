#include <list>
#include <windows.h>
#include <vector>

int main(){

    std::vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    Sleep(10000);

    return 0;
}