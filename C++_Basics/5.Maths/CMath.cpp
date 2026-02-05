#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1;
    cin >> num2;
    cout << "Max: " << max(num1, num2);
    cout << "\nMin: " << min(num1, num2);
    cout << "\nPower: " << pow(num1, num2) << '\n';
}