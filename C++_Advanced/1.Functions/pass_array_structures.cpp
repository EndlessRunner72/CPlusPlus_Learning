#include <iostream>
#include <string>
using namespace std;

struct Car
{
    int year;
    string name;
};

void print_car_details(Car car){
    cout << "Name: " << car.name << "\tYear: " << car.year << '\n';
    return;
}


// int a[9] / a[] decays to int* a, so size has to be sent seprately and we cant use sizeof function
void print_arr(int a[], int size){                                 
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return;
}

int main(){
    int arr1[9] = {1, 2, 4, 6, 8, 0, 6, 7, 2};
    print_arr(arr1, 9);

    Car c;
    c.name = "Honda City";
    c.year = 2004;
    print_car_details(c);
    
    return 0;
}