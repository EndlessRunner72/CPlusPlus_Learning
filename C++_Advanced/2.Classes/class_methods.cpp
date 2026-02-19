#include<iostream>
using namespace std;

class Car{
    public: 
        double speed(int time, double distance);                // Method declaration

        void message(){                                         // Inside the class
            cout << "Welcome to the speed calculator: \n";
        }
};

double Car::speed(int time, double distance){                   // Outside the class
    return distance / time;
}

int main(){
    Car c;
    c.message();                                                // Calling the function
    cout << "Speed of the car: " << c.speed(4, 100) << "km/hr \n";
    return 0;
}