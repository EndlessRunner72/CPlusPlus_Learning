#include<iostream>
#include<vector>
using namespace std;

// Iterators are used on all DS except for stack and queue
// Main use is where indexing is not used like sets and maps
// Iterators are also used when you need to modify/ delete the elements in the loop as u cant in for each loops

int main(){
    vector<string> cars = {"Volvo", "Madza", "Ford", "Audi"};
    
    // Initializing iterator
    vector<string>::iterator it;        // Can use auto keyword too

    // Traversing using iterator
    for (it = cars.begin(); it != cars.end(); it++)
    {
        cout << *it << '\n';
    }
    
    // Begin and end fuctions
    it = cars.begin();
    cout << "\n\nFirst element of vector: " << *it;
    it = cars.begin() + 1;
    cout << "\nSecond element of vector: " << *it << '\n';

    it = cars.end() - 1;                                // cause end points after last element
    cout << "\n\nLast element of vector: " << *it;
    it = cars.end() - 2;
    cout << "\nSecond last element of vector: " << *it;

    // Modify the values
    cout << "\n\nChanging the first element to Tesla\n";
    it = cars.begin();
    *it = "Tesla";
    cout << "New first element of vector: " << *cars.begin();

    // Looping along with modifying with iterators
    cout << "\n\nRemoving Ford from the vector using iterator loop: \n";
    auto iter = cars.begin();
    for (iter = cars.begin(); iter != cars.end(); ){
        if (*iter == "Ford"){
            cars.erase(iter);           // Deleting middle object
        }
        else{
            iter++;
        }
    }

    // Looping with for aach loop
    for(string c : cars){
        cout << c << '\n';
    }

    // Reverse traversing in iterator
    cout << "\nReverse printing with iterator: \n";
    for (auto it = cars.rbegin(); it != cars.rend(); it++)
    {
        cout << *it << '\n';
    }
    
}