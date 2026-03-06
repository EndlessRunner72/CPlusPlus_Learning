#include<iostream>
#include<string>
#include<list>
using namespace std;

// Lists work as Doubly Linked List
// 2 Differences: no direct middle access & modification at front and back only

int main(){
    list<string> cars = {"Ford", "Honda", "BMW"};

    // Displaying elements of a list
    cout << "First Element: " << cars.front() << '\n';
    cout << "Last Element: " << cars.back() << '\n';        // No at function or [] 

    // Adding elements
    cout << "\nAdding Volkswagon at front and Volvo at last\n";
    cars.push_front("Volkswagon");
    cars.push_back("Volvo");
    cout << "New first Element: " << cars.front() << '\n';
    cout << "New last Element: " << cars.back() << '\n';

    // Deleting elements

    cout << "\nDelete first and last element\n";
    cars.pop_front();
    cars.pop_back();
    cout << "New first element: " << cars.front() << '\n';
    cout << "New last element: " << cars.back() << '\n';

    // Modifying elements (Only first and last element can be modified)
    cout << "\nChanging first element to Vitara\n";
    cars.front() = "Vitara";
    cout << "Modified front element: " << cars.front() << '\n';

    // Common functions
    cout << "\nSize of list: " << cars.size();
    cout << "\nIs list empty: " << cars.empty();

    // Looping through the list (Onl yfor each loop works)
    cout << "\n\nElements in the list: ";
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';
}