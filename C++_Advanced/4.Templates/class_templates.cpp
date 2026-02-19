#include <iostream>
#include <string>
using namespace std;

template <typename T>

class Box{
    public:
        T value;

        Box (T val){
            value = val;
        }

        void display(){
            cout << "Value of the box: " << value << '\n';
        }
};

int main(){
    Box b1("Parth");
    Box<double> b2(34);                // Can use <> to specify specific dtype
    b1.display();
    b2.display();
}