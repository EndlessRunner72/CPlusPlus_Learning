#include <iostream>
#include <string>
using namespace std;

int main(){
    int num_of_guests;
    cout << "Enter number of guests: ";
    cin >> num_of_guests;
    cin.ignore();

    if (num_of_guests == 0)
    {
        return 0;
    }

    string* guests_list = new string[num_of_guests];

    for (int i = 0; i < num_of_guests; i++)
    {
        getline(cin, guests_list[i]);
    }

    cout << "\nGuests List: \n";
    for (int i = 0; i < num_of_guests; i++){
        cout << guests_list[i] << '\n';
    }
    return 0;    
}