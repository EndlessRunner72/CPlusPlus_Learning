#include<iostream>
#include<string>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number))          // Return "true" if extract attempt successful else false
    {
        cin.clear();                  // Clear the error status of cin else cin doesnt take input
        cin.ignore(10000,'\n');       // Ignore 10000 characters or ignore till '\n' hits (including '\n')
        cout << "Invalid input, try again: ";
    }

    cout << "You entered: " << number << '\n';    
}