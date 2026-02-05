#include <iostream>
using namespace std;

int main(){
    cout << "Loop 1 (Ends when i == 4)\n";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << '\n';
    }
    
    cout << "Loop 2 (skips the number 4\n";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << '\n';        
    }
}