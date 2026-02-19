#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string name;
        string auth_name;
        double price;
};

int main(){
    Book b1, b2;
    cout << "Enter the name of book:";
    getline(cin, b1.name);
    cout << "Enter the author name of the book:";
    getline(cin, b1.auth_name);
    cout << "Enter the price of the book:";
    cin >> b1.price;

    cin.ignore();

    cout << "Enter the name of book:";
    getline(cin, b2.name);
    cout << "Enter the author name of the book:";
    getline(cin, b2.auth_name);
    cout << "Enter the price of the book:";
    cin >> b2.price;

    cout << "Book 1 Details: ";
    cout << "\nName: " << b1.name << "\tAuthor Name: " << b1.auth_name << "\tPrice: " << b1.price;
    cout << "\n\nBook 2 Details: ";
    cout << "\nName: " << b2.name << "\tAuthor Name: " << b2.auth_name << "\tPrice: " << b2.price << '\n';
}