#include<iostream>
#include<thread>
using namespace std;

void task1(){
    cout << "Task 1 is called by thread with ID: " << this_thread::get_id() << '\n';
}


void task2(){
    cout << "Task 2 is called by thread with ID: " << this_thread::get_id() << '\n';
}

int main(){
    thread t1(task1);       // Thread1 starts execution here (parallely with main function)
    thread t2(task2);       // Thread2 starts execution here (parallely with main and thread1 function)

    cout << "Thread 1 ID: " << t1.get_id() << '\n';
    cout << "Thread 2 ID: " << t2.get_id() << '\n';

    if (t1.joinable())
    {
        t1.join();
        cout << "Thread 1 joined\n";
    }
    
    if (t2.joinable())
    {
        t2.detach();
        cout << "Thread 2 is detached\n";
    }

    cout << "Main function is sleeping for 3 seconds\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Main thread is awake\nMain program exited\n";
    
}