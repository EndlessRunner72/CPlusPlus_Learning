#include <iostream>
using namespace std;

class Employee{
    private:
        double salary;

    public:
        Employee(int s){
            salary = s;
        }

        friend double getSalary(Employee e);
};

double getSalary(Employee e){
    return e.salary;
}

int main(){
    Employee emp(23456);
    cout << "Salary: " << getSalary(emp) << '\n';
}