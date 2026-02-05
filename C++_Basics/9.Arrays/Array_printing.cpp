#include <iostream>
using namespace std;

int main(){
    int num[] = {1,2,3,4,5};
    num[4] = 3;

    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        cout << num[i] << ' ';
    }
    cout << '\n';

    cout << '\n';
    float percentage[] = {12.45, 56, 34.21, 33, 12.56, 67.3, 23.56};        // Omitted array size
    for(float p : percentage){
        cout << p << ' ';
    }
    cout << '\n';
}