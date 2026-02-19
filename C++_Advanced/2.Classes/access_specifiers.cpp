#include <iostream>
using namespace std;

class Numbers{
    private:                        // By default all the access specifiers are private in class
        int x = 50;

    public: 
        int y = 40;
};

int main(){
    Numbers n;
    cout << n.y << '\n';
    // cout << n.x << '\n';        // Error
}