#include <iostream>
using namespace std;

int main(){
    enum DOW {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    };

    enum powerlevel {
        LOW = 25, MEDIUM = 50, HIGH = 75
    };

    DOW day1 = MONDAY;
    DOW day2 = TUESDAY;

    powerlevel p1 = LOW;
    powerlevel p2 = MEDIUM;
    
    cout << day1 << '\t' << p1 << '\n';           // BOTH WILL PRINT THE NUMERIC VALUE (0   25)
    cout << day2 << '\t' << p2 << '\n';           // BOTH WILL PRINT THE NUMERIC VALUE (1   50)
}