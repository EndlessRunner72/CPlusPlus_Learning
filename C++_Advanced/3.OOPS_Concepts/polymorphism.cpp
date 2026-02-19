#include <iostream>
using namespace std;

class Animal{
    public:
        void sound(){
            cout << "Animal makes a sound\n";
        }
};

class Pig : public Animal{
    public:
        void sound(){
            cout << "Pig sound: Oink, Oink\n";
        }
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "Dog sound: Bow, wow\n";
        }
};

class Cat : public Animal{
    public:
        void sound(){
            cout << "Cat sound: Meow, meow\n";
        }
};

int main(){
    Animal a;
    Pig p;
    Dog d;
    Cat c;
    a.sound();
    p.sound();
    d.sound();
    c.sound();
}