#include<memory>
#include<iostream>
using namespace std;

// Simple pointer can use an object or can be a datatype
int main(){
    auto_ptr<int> p1(new int(10));
    cout << "P1 address: " << p1.get() << ", P1 value: " << *p1 << '\n';

    auto_ptr<int> p2 = p1;  // Now p1 becomes null (Unlike unique we just have to assign and not explicitly move it)

    cout << "\nAfter transfering ownership: \n";
    cout << "P1 address: " << p1.get() << '\n';
    cout << "P2 address: " << p2.get() << ", P2 value: " << *p2 << '\n';
}