#include <iostream>
using namespace std;

int main(){
    int day_of_week;
    cout << "Enter the day of week in number: ";
    cin >> day_of_week;
    
    switch(day_of_week) {
        case 1:                     // USE {} FOR LONGER CODE BLOCKS THAN 1 LINES
            cout << "Monday\n";
            break;
        
        case 2:
            cout << "Tuesday\n";
            break;

        case 3:
            cout << "Wednesday\n";
            break;

        case 4:
            cout << "Thursday\n";
            break;

        case 5:
            cout << "Friday\n";
            break;

        case 6:
            cout << "Saturday\n";
            break;

        case 7:
            cout << "Sunday\n";
            break;
        
        default:
            cout << "Invalid day entered!!\n";
    }
}