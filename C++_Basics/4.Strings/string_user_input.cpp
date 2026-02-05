#include <iostream>
#include <string>
using namespace std;

int main(){
    string fname;
    cout << "Write your full name: ";
    getline(cin, fname);                       // Will only take till \n (also use this only) 
    cout << fname << '\n';

    string name;
    cout << "Write your full name: ";
    cin >> name;                       // Will only take till first whitespace
    cout << name << '\n';
}