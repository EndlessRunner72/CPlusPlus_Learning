// For Synchronization we can use lock_gaurd or mutex.
// It prevents race condition. (2 threads access same function)

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;

void use_mutex(int id){
    mtx.lock();

    cout << "Thread " << id << " is currently operating\n";

    mtx.unlock();
}

void use_lock_guard(int id){
    lock_guard<mutex> guard(mtx);
    cout << "Thread " << id << " is currently operating\n"; // Automatically unlocks
}

int main(){
    thread t1(use_mutex, 1);        //Thread starts here
    cout << "Now main program is running\n";    // Main thread is fastest so printed first 

    thread t2(use_mutex, 2);        // Thread starts here

    t1.join();      // Checks if this is done then only next line in main thread is executed (Merge with main)
    cout << "This main prog. line only prints after atleast first thread is completed\n";
    t2.join();


    thread t3(use_lock_guard, 3);
    thread t4(use_lock_guard, 4);

    t3.detach();    // Means it will complete its task on its own and we dont have to wait for it to execute further
    t4.detach();    // Doesnt wait to print the last line in main thread

    cout << "Main thread is over\n";
}