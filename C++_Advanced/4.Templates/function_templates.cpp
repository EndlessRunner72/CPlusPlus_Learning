#include <iostream>
using namespace std;

template <typename T>               // Only difference is that T can be anything
T add(T a, T b){                   //Syntax is same as of basic function (returntype fun_name (parameters)) 
    return a + b; 
}

int main(){
    cout << add(4, 6) << '\n';
    
    // If you use 2 different type of dtype then use <> to force the specific dtype
    cout << add<double>(5, 6.3) << '\n';
}