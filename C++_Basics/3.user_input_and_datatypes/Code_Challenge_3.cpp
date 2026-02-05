// Student Report Card
#include <iostream>
using namespace std;

int main(){
    int maths, science, english, sst, total;
    float percentage;
    char grade;

    cout << "Enter marks obtained in maths: ";
    cin >> maths;
    cout << "Enter marks obtained in science: ";
    cin >> science;
    cout << "Enter marks obtained in english: ";
    cin >> english;
    cout << "Enter marks obtained in social studies: ";
    cin >> sst;
    
    total = maths + science + english + sst;
    percentage = total * 100 / 400.0;

    cout << "Total is " << total << "/400\nEnter grade: ";
    cin >> grade;

    cout << "Student report:\n";
    cout << "Maths: " << maths << '\n';
    cout << "Science: " << science << '\n';
    cout << "English: " << english << '\n';
    cout << "Social Studies: " << sst << '\n';
    cout << "Total: " << total << '\t';
    cout << "Percentage: " << percentage << "%\t";
    cout << "Grade: " << grade << '\n';

    return 0;
}