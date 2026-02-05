#include <iostream>
#include <string>
using namespace std;

int main(){
    int* num_ptr = new int;
    *num_ptr = 35;
    cout << *num_ptr << '\n';

    int* arr_ptr = new int[4];
    for (int i = 0; i < 4; i++)
    {
        arr_ptr[i] = (i + 1) * 2;
    }

    for (int i = 0; i < 4; i++){           // You cant use foreach loop here (also here i++ will be i = i + (size of int))
        cout << arr_ptr[i] << '\n';
    }    

    delete num_ptr;
    delete []arr_ptr;
    return 0;
}