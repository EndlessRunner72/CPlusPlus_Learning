#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int height;
    float weight;
};

int main(){
    Person p1, p2, p3;
    cout << "Enter the name of person1: ";
    getline(cin, p1.name);
    cout << "Enter the height of the person1: ";
    cin >> p1.height;
    cout << "Enter the weight of the person1: ";
    cin >> p1.weight;

    cin.ignore();

    cout << "Enter the name of person2: ";
    getline(cin, p2.name);
    cout << "Enter the height of the person2: ";
    cin >> p2.height;
    cout << "Enter the weight of the person2: ";
    cin >> p2.weight;

    p3.name = "John Doe";
    p3.height = 159;
    p3.weight = 56;

    cout << "Members: \n";
    cout << "Name: " << p1.name << "\tHeight: " << p1.height << "\tWeight: " << p1.weight << '\n';
    cout << "Name: " << p2.name << "\tHeight: " << p2.height << "\tWeight: " << p2.weight << '\n';
    cout << "Name: " << p3.name << "\tHeight: " << p3.height << "\tWeight: " << p3.weight << '\n';
    return 0;
}