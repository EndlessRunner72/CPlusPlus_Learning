#include <iostream>
using namespace std;

int main(){
    int i = 1, j = 1;
    cout << "While condition i <= 10: \n";
    while (i <= 10)                                  // Check then execute
    {
        cout << i << '\n';
        i++;
    }
    
    cout << "Do While condition i <= 10: \n";
    do                                              // Execute then check
    {
        cout << j << '\n';
        j++;
    } while (j <= 10);
    return 0;                                       // In this same output
}