#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        int year;
        string name;
        string model;

        Car(string x, string y, int z);                              // Outside declaration
        
        // Car(string x, string y, int z){                              // Inside the class
        //     name = x;
        //     model = y;
        //     year = z;
        // }
};

Car::Car(string x, string y, int z){                              // Outside the class
    name = x;
    model = y;
    year = z;
}

int main(){
    Car c1("Honda", "Amaze", 2019);
    Car c2("Mercedes", "Benz", 2020);

    cout << "Car name: " << c1.name << " " << c1.model << "\tYear: " << c1.year << '\n';
    cout << "Car name: " << c2.name << " " << c2.model << "\tYear: " << c2.year << '\n'; 
}