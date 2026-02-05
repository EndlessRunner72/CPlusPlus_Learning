#include <iostream>
#include <string>
using namespace std;

void greet(string name){
    cout << "Good Morning, " << name << '\n';
    return;
}

void msg(int x = 1){
    cout << "This is message " << x << '\n';
}

int sum (int num1, int num2){
    return num1 + num2;
}

void farewell(){
    cout << "Good Bye \n";
}

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    greet(name);                        // One argument

    msg();                              // Default parameter 1
    msg(2);                             // Default parameter 2

    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a;
    cin >> b;
    cout << sum(a, b) << '\n';          // Mutliple argumets

    farewell();                         // No arguments

}