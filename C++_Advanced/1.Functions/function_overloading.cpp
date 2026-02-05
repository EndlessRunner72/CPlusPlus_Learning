// FUNCTION OVERLOADING == SAME FUNC. NAME, DIFF PARAMETERS

#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main(){
    cout << "First add function: " << add(3, 5) << '\n';
    cout << "Second add function: " << add(4.6, 3.2) << '\n';
    cout << "Third add function: " << add(3, 8, 12) << '\n';
}