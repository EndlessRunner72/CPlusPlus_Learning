#include <iostream>
using namespace std;

int main(){
    cout << "Hypotenuse on right side: \n";
    for(int i = 1; i <=5; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }


    cout << "Hypotenuse on left side: \n";
    for(int i = 1; i <=5; i++){
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    return 0;
}