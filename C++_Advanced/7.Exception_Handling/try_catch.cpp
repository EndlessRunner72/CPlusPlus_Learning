#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try                                         // To test the code
    {
        if (age >= 18)
        {
            cout << "Access Granted\n";
        }
        else
        {
            throw age;                          // To throw a exception
        }   
    }
    catch(int num)
    {
        cout << "Access Denied (Underage): " << num << '\n';    // Handle the exception
    }
    
}