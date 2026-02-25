#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile("Shop_items.txt");           // File should be present already

    cout << "Enter 3 shop items names and price: \n";
    double price;
    string name;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter name of product: ";
        getline(cin, name);
        cout << "Enter price of product: ";
        cin >> price;
        cin.ignore();
        
        myFile << "Product: " << name << '\n';
        myFile << "Price: " << price << "\n\n";
    }

    // Reset the EOF flags to make it active again
    myFile.clear();

    // seekg(position, dir)
    myFile.seekg(0, ios::beg);            
    // seekg for geting cursor(read mode)
    // seekp for getting cursor (writing mode)
    // ios::beg ---> dir (beg, cur, end)

    string info;
    cout << "\nPrinting the file: \n";  
    while (getline(myFile, info))
    {
        cout << info << '\n';
    }
    
    myFile.close();
}