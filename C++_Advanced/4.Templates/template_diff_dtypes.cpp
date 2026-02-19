#include <string>
#include <iostream>
using namespace std;

template <typename T1, typename T2>             //2 dtypes

class Pair{
    public:
        T1 firstvalue;
        T2 secondvalue;
    
        Pair(T1 fvalue, T2 svalue){
            firstvalue = fvalue;
            secondvalue = svalue;
        }

        void show();
};

// template <typename T1, typename T2>                     // Redeclare if function outside the class
// Pair<T1, T2>::Pair(T1 fvalue, T2 svalue){}              // Use <T1, T2> or <T> depending on typenames


template <typename T1, typename T2>                           // Redeclare if function outside the class
void Pair<T1, T2>::show(){                                    // Here we use <T>, in "normal one we dont"
    cout << "First Value: " << firstvalue << "\tSecond Value: " << secondvalue << '\n';
}

int main(){
    Pair person("Parth", 21);
    Pair intnums(56, 89);                                // You can enter 2 nums with same dtypes 
    Pair nums(21,42.3);
    Pair<string, double> car("Mustang", 32000);          // Here you can use <>

    person.show();
    intnums.show();
    nums.show();
    car.show();
}