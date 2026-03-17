#include<iostream>
#include<set>
using namespace std;

// "Ignores" duplicates and shows in ascending/ descending order
// Can use traditional loop, have to use for each loop

int main(){
    // Ignoring duplicate
    set<string> cars = {"Volvo", "BMW", "Porche", "Ford", "Porche"}; // Porche 2 times
    cout << "Elements in the set: ";
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';

    // For descending order
    set<int, greater<int>> nums = {1, 5, 7, 2, 6};
    cout << "\nElements in the set: ";
    for(int n : nums){
        cout << n << '\t';
    }
    cout << '\n';

    // Add Elements
    cars.insert("Madza");
    cars.insert("Honda");

    cout <<"\nAdding Madza and Honda";
    cout << "\nUpdated Set: ";
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';

    cout << "\nDeleting Porche amd Madza";
    cars.erase("Porche");                       // All the instances of the element are removed
    cars.erase("Madza");
    cout << "\nUpdated Set: ";
    for(string c : cars){
        cout << c << '\t';
    }
    cout << '\n';

    // Common Commands (clear, empty and size)
    cout << "\nSize of the cars set: " << cars.size();      // Will give size ignoring the duplicates
    
    cout << "\nDeleting all the elements";
    cars.clear();                                        // Remove all elements

    cout << "\nIs set empty: " << cars.empty() << '\n';

}
