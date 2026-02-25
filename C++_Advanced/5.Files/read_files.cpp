#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    cout << "Reading Book_Info.txt... \n\n";
    ifstream myFile("Book_Info.txt");
    string text;

    while (getline(myFile, text))
    {
        cout << text << '\n';
    }
    
    myFile.close();
}