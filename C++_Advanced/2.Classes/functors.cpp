// Function objects == Functors

#include<iostream>
using namespace std;

class Functors{
    public:
        int num;

        Functors(int x) {num = x; }

        // operator() is functor and is defined as below; second () is for arguments
        void operator()(){
            cout << "Functor called!!\n number is: " << num << '\n';
        }
};

int main(){
    Functors funcs(200);
    funcs();                    // Functors are called like this

    Functors(150)();
}