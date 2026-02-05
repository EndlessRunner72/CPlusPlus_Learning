#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "BURGER";
    string &meal = food;

    meal = "PIZZA";                         // BOTH ARE UPDATED
    
    cout << "FOOD = " << food << '\n';
    cout << "MEAL = " << meal << '\n';
    cout << "Memory address of food: " << &food << '\n';     // SAME ADDRESS
    cout << "Memory address of meal: " << &meal << '\n';
}