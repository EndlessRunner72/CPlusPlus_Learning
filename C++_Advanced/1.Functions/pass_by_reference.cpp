#include <iostream>
using namespace std;

void swap (int &num1, int &num2){
    int temp = num2;
    num2 = num1;
    num1 = temp;
}

int main(){
    int a = 15, b = 20;
    cout << "Before Swap: " << a << ' ' << b << '\n';
    swap(a, b);
    cout << "After Swap: " << a << ' ' << b << '\n';
    return 0;
}