#include<iostream>
#include<string>
#include<vector>
using namespace std;

// vector<dtype> vector_name 
// Vector is a dynamic array

int main(){
    vector<string> cars = {"Volvo", "Ford", "Honda"};

    // Displaying elements
    cout << "Second Elements: " << cars.at(1) << '\n';   // Preffered over []
    
    cout << "First Element: " << cars.front() << '\n';
    cout << "Last Element: " << cars.back() << '\n';

    // Adding vector elements
    cout << "\nAdding 2 elements: BMW and Vitara\n";
    cars.push_back("BMW");
    cars.push_back("Vitara");
    cout << "New Last Element: " << cars.back() << '\n';

    // Deleting vector element 
    cout << "\nDeleted last element\n";
    cars.pop_back();
    cout << "New Last Element: " << cars.back() << '\n';

    // Modifying elements
    cout << "\nChanging 1st element to Volkswagon\n";
    cars.at(0) = "Volkswagon";
    cout << "New First Element: " << cars.front() << '\n';

    // Common Features
    cout << "\nSize of vector: " << cars.size() << '\n';
    cout << "Is vector empty: " << cars.empty() << '\n';

    // Looping through vector 
    cout << "\nElements in the vector: ";      // Can also use for loop using cars.size()
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';
}