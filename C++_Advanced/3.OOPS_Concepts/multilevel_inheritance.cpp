#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
        string parent_name = "Bipin\n";
};

class Child : public Parent{
    public:
        string child_name = "Niraj\n"; 
};

class grandChild : public Child{
    public:
        string grandchild_name = "Parth\n";
};

int main(){
    grandChild myObj;                     // Accessing all parent and grandparent variable using grandchild object
    cout << "Inheritance: \n";
    cout << "Parent: " << myObj.parent_name;
    cout << "Child: " << myObj.child_name;
    cout << "Grand Child: " << myObj.grandchild_name;
    return 0;
}