#include<iostream>
#include<map>
using namespace std;

// Maps store value in form of key-value pair
// Keys should be unique
// Can only use for each to traverse and greater<int> for descending order (by keys)

int main(){
    map<string, int> people = {{"John", 13}, {"Mike", 19}, {"Kamie",21}};
    map<string, int, greater<string>> people_rev = {{"John", 13}, {"Mike", 19}, {"Kamie",21}};

    // Accessing element in a map
    cout << "Age of John is: " << people.at("John");      // Can use people["John"]

    // Modifying the value of the value
    cout << "\n\nChanging John's age to 20";
    
    people.at("John") = 20;
    cout << "\nJohn\'s modified age is: " << people.at("John");

    // Add elements (If 2 keys are equal then only first instance is considered, second is ignored)
    cout << "\n\nAdding Akila and Liam";

    people.insert({"Akila", 23});
    people["Liam"] = 34;
    cout << "\nAge of Akila is: " << people.at("Akila");
    cout << "\nAge of Liam is: " << people.at("Liam");

    // Delete elements
    cout << "\n\nDeleting John from the map";
    people.erase("John");

    // Loop through a map
    cout << "\n\nElement in the map (Name-Age):\n";
    for(auto p : people){
        cout << p.first << '-' << p.second << '\n';
    }

    cout << "\n\nElements in map 2 (Name-Age) in reverse order:\n";
    for(auto p : people_rev){
        cout << p.first << '-' << p.second << '\n';
    }

    cout << "\nSize of the map: " << people.size();
    cout << "\nIs map empty: " << people.empty();

    cout << "\n\nDeleting all the elements of the map: ";
    people.clear();                                             //To delete all the elements
    cout << "\nIs map empty now: " << people.empty() << '\n';   
}