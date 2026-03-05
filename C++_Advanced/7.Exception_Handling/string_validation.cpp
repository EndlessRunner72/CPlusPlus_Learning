#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    do
    {
        cout << "Enter a string: ";
        getline(cin, s);
    } while (s.empty());

    cout << "You entered : " << s << '\n';    
}