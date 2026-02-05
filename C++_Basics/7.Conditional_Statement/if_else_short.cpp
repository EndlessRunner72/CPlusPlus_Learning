#include <iostream>
using namespace std;

int main(){
    int hours;
    cout << "Enter hour of the day: ";
    cin >> hours;
    string greet = (hours >=18) ? "Good Night\n" : "Good Day\n";     // cout << ternary operator can also be used
    cout << greet;

    // Nested Ternary

    int hours1;
    cout << "Enter hour of the day: ";
    cin >> hours1;
    cout << ((hours1 < 12) ? "Good morning" : (hours < 18 ) ? "Good Afternoon" : "Good night"); // For cout () are important
    return 0;
}