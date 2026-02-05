#include <iostream>
using namespace std;

int main(){
    int iterations;
    cout << "Enter number of iterations: ";
    cin >> iterations;
    int num1 = 1, num2 = 1;

    if (iterations == 1)
    {
        cout << num1 << '\n';
        return 0;
    }

    if (iterations == 2)
    {
        cout << num1 << " " << num2 << '\n';
        return 0;
    }

    cout << num1 << " " << num2 << ' ';
    int temp;
    for (int i = 2; i < iterations; i++)
    {
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        cout << num2 << ' ';
    }
    cout << '\n';
    return 0;
}