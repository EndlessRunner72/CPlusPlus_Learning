#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        string name;
        string model;

        Car(){
            name = "Unknown";
            model = "Unknown";
        }

        Car(string x, string y){
            name = x;
            model = y;
        }

    void display(){
        cout << "Car: " << name << " " << model << '\n';
        return;
    }
};

int main(){
    Car c1;
    Car c2("Honda", "Amaze");
    Car c3("Mercedes", "S-Class");
    c1.display();
    c2.display();
    c3.display();
    return 0;
}