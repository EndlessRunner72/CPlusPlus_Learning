#include<iostream>
#include<memory>
using namespace std;

// Unique pointers point to an object and after that opther pointers can't point to that object

class Rectangle{
    public:
        int length, breadth;

    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    float area(){
        return length * breadth;
    }

    float perimenter(){
        return 2 * (length + breadth);
    }
};

int main(){
    unique_ptr<Rectangle> p1(new Rectangle(23, 5)); 
    cout << "Area of the rectangle of dimension (" << p1->length << ", " << p1->breadth << ") is: " << p1->area() << '\n';
    cout << "Location of p1: " << p1.get() << '\n';
    
    // unique_ptr<Rectangle> p2 = p1;            Error
    unique_ptr<Rectangle> p2 = move(p1);        // Changes owership
    cout << "Location of p1 (after ownership is changed): " << p1.get() << '\n';

    cout << "\nRectangle dimensions: " << p2->length << ", " << p2->breadth << '\n';
    cout << "Location of p2: " << p2.get() << '\n';
}