#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "Burger";
    string* ptr = &food;

    cout << "food: " << food << '\n';
    cout << "ptr: " << ptr << '\n';        // Get the address of food
    cout << "*ptr: " << *ptr << '\n';       // Get the value at the pointer
    cout << "&ptr: " << &ptr << '\n';       // Access the address of the pointer

    *ptr = "Pizza";
    cout << "food after modification: " << food << '\n';

    return 0;
}