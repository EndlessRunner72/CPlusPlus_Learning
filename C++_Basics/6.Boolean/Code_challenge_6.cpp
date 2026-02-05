#include <iostream>
using namespace std;

int main(){
    int userAge, votingAge = 18;
    cout << "Enter your age: ";
    cin >> userAge;

    if (userAge >= votingAge){
        cout << "You can vote\n";
    }
    else {
        cout << "You can't vote\n";
    }
    return 0;
}