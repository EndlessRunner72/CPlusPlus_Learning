// Functions that can be over-ridden in real time

#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound(){                        // Virtual Function
            cout << "Animal makes a sound\n";
        }
};

class Pig : public Animal{
    public:
        void sound() override {                      // Write override (Optional but good practice)
            cout << "Pig sound: Oink, Oink\n";
        }
};

class Dog : public Animal{                           // Write override (Optional but good practice)
    public:
        void sound() override {
            cout << "Dog sound: Bow, wow\n";
        }
};

class Cat : public Animal{                           // Write override (Optional but good practice)
    public:
        void sound() override {
            cout << "Cat sound: Meow, meow\n";
        }
};

int main(){
    Animal* a;                                       // Pointer to base class
    Pig p;                                           // Declare function
    Dog d;
    Cat c;

    a = &p;                                          // Point the base class to the Pig object
    a->sound();                        
    // If "virtual" keyword no there then "Animal make a sound" is printed

    a = &d;
    a->sound();

    a = &c;
    a->sound();
}