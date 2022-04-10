#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a[] = {1, 5, 6, 8, 97, 0, 2, 5, 12, 45, 56, 8};
    int nEven = 0;


    for(int  i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] % 2 == 0)
            nEven++;
    }

    cout << nEven << endl;

    int indexes[nEven], nIndex = 0;
    int aux;

    for(int  i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] % 2 == 0) {
            indexes[nIndex] = i;
            //cout << indexes[nIndex] << endl;
            nIndex++;
        }
    }

    for(int i = 0; i < floor(nEven/2); i++){
        aux = a[indexes[i]];
        a[indexes[i]] = a[indexes[nEven - i - 1]];
        a[indexes[nEven - i - 1]] = aux;
    }

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
        cout << a[i] << " ";

    return 0;
}
