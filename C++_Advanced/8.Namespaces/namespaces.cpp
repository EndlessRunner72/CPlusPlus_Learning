#include <iostream>
using namespace std;

namespace Mynamespace
{
    int x = 42;   
}

namespace name{
    string c = "Parth";
}

using namespace name; 
int main(){
    cout << Mynamespace::x << '\n';
    cout << c << '\n';
}