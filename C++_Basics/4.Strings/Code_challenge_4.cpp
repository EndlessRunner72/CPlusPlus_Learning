#include <string>
#include <iostream>
using namespace std;

int main(){
    string name, occupation;
    int salary;
    cout << "Write name, occupation and salary (Enter ater each): \n";
    getline(cin, name);
    getline(cin, occupation);
    cin >> salary;
    cout << "Name: " << name << "\t\tOccupation: " << occupation << "\t\tSalary " << salary << '\n';
    return 0;
}