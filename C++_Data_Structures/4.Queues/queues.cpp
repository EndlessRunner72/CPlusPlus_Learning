#include<iostream>
#include<queue>
using namespace std;

// In Queue you can only 'add at back' and 'delete at front' method unlike Lists 
// however access and modifying works in front and back unlike stack
int main(){
    queue<string> cars;

    // Add elements (Cant add like vectors/lists<> cars = {};)
    cout << "Adding elements in order: Volvo, Volkswagon, Ford";
    cars.push("Volvo");
    cars.push("Volkswagon");
    cars.push("Ford");

    // Access Queue elements (Cant use for or for each loops)
    cout << "\n\nFirst Element: " << cars.front();
    cout << "\nLast element: " << cars.back();

    // Modifying Queue Elements
    cout << "\n\nChanging first element to \"BMW\" and last to \"Lamborgini\"";
    
    cars.front() = "BMW";
    cars.back() = "Lamborgini";

    cout << "\nNew first element: " << cars.front();
    cout << "\nNew last element: " << cars.back();  

    // Deleting top element
    cout << "\n\nDeleting the first element";
    
    cars.pop();
    cout << "\nNew first element: " << cars.front();

    // General Functions
    cout << "\n\nSize of the stack: " << cars.size();
    cout << "\nIs the stack empty: " << cars.empty() << '\n';
}