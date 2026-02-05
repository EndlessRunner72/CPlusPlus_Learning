#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << s1.length() << "\n";    // This is same as size()
    cout << s1.size() << "\n";      // This is more globally used  
    return 0;
}