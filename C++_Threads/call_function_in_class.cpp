#include<thread>
#include<iostream>
using namespace std;

class MyClass{
    public:

        void non_static_function(){
            cout << "Non static function called\n";
        }

        static void static_function(){
            cout << "static function called\n";
        }
};

int main(){
    MyClass obj;
    thread t1(&MyClass::non_static_function, &obj); // Put comma for passing arguments
    
    thread t2(&MyClass::static_function);    // Put comma for passing arguments

    t1.join();
    t2.join();
}