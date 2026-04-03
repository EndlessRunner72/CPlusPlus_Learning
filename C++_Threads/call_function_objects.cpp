// Function Objects == Functors

#include<iostream>
#include<thread>
using namespace std;

class SumFunctor{
    public:
        int num;

        SumFunctor(int x){ num = x; }

        // operator() is functor and is defined as below
        void operator()(){
            cout << num << " ^ 2 = " << (num * num) << '\n';
        }
};

int main(){
    SumFunctor sf(20);

    // It calls functor, in normal functor is called as sf(); but just like in functions we dont pass () we dont need to that in here too
    thread t(sf);         

    t.join();

    // Functor are called as sf(); or ClassName(20)();
}