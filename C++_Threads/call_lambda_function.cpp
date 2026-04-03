#include<iostream>
#include<thread>
using namespace std;

int main(){
    cout << "This is main function now thread is called\n";

    thread t([](int n) {
        cout << "Thread function called with number: " << n << '\n';
    }, 50);

    t.join();
    cout << "Main function over\n";
}