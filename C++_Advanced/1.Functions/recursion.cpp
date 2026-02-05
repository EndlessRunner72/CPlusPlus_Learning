#include <iostream>
using namespace std;

void countdown(int n){
    if (n == 0) return;

    cout << n << '\n';
    countdown(n - 1);
    return;
}

void countup(int n){
    if (n == 0) return;

    countup(n - 1);
    cout << n << '\n';
    return;
}

int main(){
    int num;
    cout << "Enter the countdown starting number: ";
    cin >> num;
    countdown(num);

    cout << "Enter the coutup last number: ";
    cin >> num;
    countup(num);
}