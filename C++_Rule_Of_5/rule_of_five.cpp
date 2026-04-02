#include<iostream>
#include<utility>
using namespace std;

class A{
    public:
        int data;

    // Default constructor
    A(int x){
        data = x;
        cout << "Default constructor is called\n";
    }

    // Below parameter is called ""pass by refrence"" NOT "pass by pointer"
    // Reference is basically an ALIAS for the object passed as argument below so use it as a object

    // Copy constructor (const is optional but recommended)
    A(const A &source){
        data = source.data;
        cout << "Copy constructor is called\n";
    }

    // Move constructor (no const as we change source's data)
    A(A &&source) noexcept{
        data = source.data;
        source.data = 0;
        cout << "Move constructor called\n";
    }

    void display(){
        cout << "Value: " << data << '\n';
    }

    // Copy assignment cosntructor
    A& operator = (const A& source){
        cout << "Copy assignment operator called\n";
        if (this == &source)        //this is "pointer" to object on LHS; &source is address of a1 (source is reference)
        {
            return *this;   // Prevents if someone says a1 = a1
        }
        
        this->data = source.data;
        return *this;               // *this converts(derefrences) pointer to object
    }

    // Move assignment constructor
    A& operator = (A&& source) noexcept{
        cout << "Move assignment operator is called\n";
        if (this == &source)
        {
            return *this;
        }

        this->data = source.data;
        source.data = 0;
        return *this;
    }

    // Destructor
    ~A(){
        cout << "Object with data: " << data << " is destroyed\n";
    }
};

int main(){
    A a1(15);   // Default

    A a2(a1);   // Copy 
    
    A a3(move(a2));;    // Move (it is faster then copy)

    // Can be used on already exsisting assignment else use simple copy
    A a4(100);
    a4 = a1;    // Copy assignment operator

    // Can be used on already exsisting assignment else use simple move
    A a5(120);
    a5 = move(a3);    // Move assignment operator 

    // Copy requires "&" while move requires "&&"

    cout << '\n';
    a1.display();
    a2.display();
    a3.display();   // a2 becomes 0
    a4.display();   // 100 changes to 15
    a5.display();   // 120 changs to 15 and a3 becomes 0

    // DESTRUCTION WILL BE IN STACK ORDER. (LIFO)
}