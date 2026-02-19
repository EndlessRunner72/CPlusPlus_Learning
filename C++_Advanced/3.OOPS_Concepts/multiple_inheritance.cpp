#include <iostream>
#include <string>
using namespace std;

class BaseClassOne{
    public:
        void baseMethod1(){
            cout << "Base Class One method executed\n";
        }
};

class BaseClassTwo{
    public:
        void baseMethod2(){
            cout << "Base Class Two method executed\n";
        }
};

class DerivedClass : public BaseClassOne, public BaseClassTwo{          // Multiple Parent ---> One child
    // Empty Class
};

int main(){
    DerivedClass dc;
    dc.baseMethod1();         // If both base class had same function name and parameters then error will occur
    dc.baseMethod2();
}