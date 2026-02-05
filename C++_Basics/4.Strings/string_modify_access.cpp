#include <iostream>
#include <string>
using namespace std;

int main(){
    // Access String using []
    string greet = "Hello";
    cout << "Orignal string: " << greet;
    cout << "\nFirst letter of the string: " << greet[0];
    cout << "\nLast letter of the string: " << greet[greet.size() - 1];

    // Modify string both ways ([] and at)
    greet[0] = 'Y';
    greet.at(4) = 'p';

    // Access using at function
    cout << "\n\nModified string: " << greet;
    cout << "\nFirst letter of the string: " << greet.at(0);
    cout << "\nLast letter of the string: " << greet.at(greet.size() - 1) << '\n';
    return 0;
}