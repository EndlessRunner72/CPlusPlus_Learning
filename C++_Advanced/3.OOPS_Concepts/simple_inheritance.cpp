#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
        string brand = "Ford";

        void honk(){
            cout << "Honk, honk!!" << '\n';
        }
};

class Car : public Vehicle{
    public:
        string model = "Mustang";
};

int main(){
    Car c;
    
    // Child access parent's stuff (Only public and protected stuff)
    c.honk();          

    // If brand was protected then (c.brand) would give error however (brand) in child function is accepted
    cout << c.brand << " " << c.model << '\n';
    return 0;
}