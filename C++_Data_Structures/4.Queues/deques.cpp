#include<iostream>
#include<deque>
using namespace std;

// Difference between Deque and List is that middle access is possible
// Difference between Deque and Queue is that pop and push can happen at both ends
int main(){
    // This works
    deque<string> cars = {"Volvo", "Ford", "Volkswagon", "Porsche"};

    // Accssing elements
    cout << "Front element: " << cars.front();
    cout << "\nSecond element: " << cars.at(1); // [] also works
    cout << "\nLast element: " << cars.back();

    // Modifying Elements
    cout << "\n\nChanging first element to Honda";

    cars.at(0) = "Honda";              // .front method and [] also works
    cout << "\nNew first element: " << cars.front();

    // Adding elements
    cout << "\n\nAdding Mclaren at front and Audi at back";

    cars.push_front("McLaren");
    cars.push_back("Audi");

    cout << "\new first element: " << cars.front();
    cout << "\new last element: " << cars.back();

    // Deleting elements
    cout << "\n\nDeleting first and last element";
    
    cars.pop_front();
    cars.pop_back();

    cout << "\new first element: " << cars.front();
    cout << "\new last element: " << cars.back();

    // Common functions:
    cout << "\n\nSize of the dequeue: " << cars.size();
    cout << "\nIs the deque empty: " << cars.empty();

    // Looping through the deque
    cout << "\n\nElements in the dequeue: ";
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';
}