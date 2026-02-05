#include <iostream>
#include <string>
using namespace std;

int main(){
    string fname = "Parth ";
    string lname = "Patel\n";
    string fullname = fname + lname;      // Method 1 (+ operator)

    string mname = "Niraj ";
    string finalfullname = (fname.append(mname)) + lname;       // Method 2 (append func)
    cout << finalfullname;
    return 0;
}