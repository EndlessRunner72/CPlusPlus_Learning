#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string book_name;
    string book_description;
    double book_price;
    ofstream myFile("Book_Info.txt");           // IMP (Will Create file if not present already)
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the name of the book: ";
        getline(cin, book_name);
        cout << "Enter the price of the book: ";
        cin >> book_price;
        cin.ignore();
        cout << "Enter the description of the book: ";
        getline(cin, book_description);

        myFile << "Book Name: " << book_name << '\n';
        myFile << "Book Price: " << book_price << '\n';
        myFile << "Book Description: " << book_description << "\n\n";
    }

    myFile.close();
}