#include<iostream>
#include<stack>
using namespace std;

// In stack only top element can be viewed and modified
int main(){
    stack<string> cars;
    
    // Add elements (Cant add like vectors/lists<> cars = {};)
    cout << "Adding elements in order: Volvo, Volkswagon, Ford";
    cars.push("Volvo");
    cars.push("Volkswagon");
    cars.push("Ford");

    // Access Stack Elements (Cant use for or for each loops)
    cout << "\n\nTop element: " << cars.top();

    // Modifying stack (Changes can only be made to top element)
    cout << "\n\nChanging top element to Tesla";
    
    cars.top() = "Telsa";
    cout << "\nNew top element: " << cars.top();

    // Deleting top element
    cout << "\n\nDeleting the top element";
    
    cars.pop();
    cout << "\nNew Top element: " << cars.top();

    // General Functions
    cout << "\n\nSize of the stack: " << cars.size();
    cout << "\nIs the stack empty: " << cars.empty() << '\n';
}