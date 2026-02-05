#include <iostream>
using namespace std;

int main(){
    bool valTrueRepresent = true;
    bool valFalseRepresent = false;

    cout << "0 and 1 printing: " << valFalseRepresent << " " << valTrueRepresent;

    cout << boolalpha;             // IMP
    cout << "\nfalse and true printing: " << valFalseRepresent << " " << valTrueRepresent << '\n';
    return 0;
}