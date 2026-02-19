#include <iostream>
using namespace std;

class Employee{
    protected:
        double salary;
};

class Developer : public Employee{
    public:
        void setSalary(double s){
            salary = s;
        }

        double getSalary(){
            return salary;
        }
};

int main(){
    Developer devObj;
    devObj.setSalary(9000.52);
    cout << "Developer Salary: " << devObj.getSalary() << '\n';
    // cout << devObj.salary;               // Error (as protected variable)
}