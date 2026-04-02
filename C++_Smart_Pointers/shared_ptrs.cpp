#include<memory>
#include<iostream>
using namespace std;

class Rectangle{
    public:
        float length, breadth;

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        
        float area(){
            return length * breadth;
        }

        float perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){
    shared_ptr<Rectangle> p1(new Rectangle(23, 5));
    shared_ptr<Rectangle> p2 = p1;

    cout << p1.get() << '\n';
    cout << p2.get() << '\n';

    cout << "Area using P1: " << p1->area();
    cout << "\nDimensions using P2: (" << p2->length << ", " << p2->breadth << ")\n";

    cout << "Ownerships of P1: " << p1.use_count() << '\n';
}