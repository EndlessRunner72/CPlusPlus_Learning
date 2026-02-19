#include <iostream>
using namespace std;

class Employee{
    private:
        double salary;

    public:
        double getSalary(){
            return salary;
        }

        void setSalary(double s);              // Can set here too
};

void Employee::setSalary(double s){
    salary = s;
}

int main(){
    Employee e1;
    e1.setSalary(2500.54);
    cout << "Salary: " << e1.getSalary() << '\n';
}