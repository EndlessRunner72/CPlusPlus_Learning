#include <iostream>
using namespace std;

int main(){
    int passcode;
    cout << "Enter the passcode: ";
    cin >> passcode;

    if (passcode == 1892)
    {
        cout << "Door Opened\n";
    }
    else{
        cout << "Wrong passcode\n";
    }
    
}