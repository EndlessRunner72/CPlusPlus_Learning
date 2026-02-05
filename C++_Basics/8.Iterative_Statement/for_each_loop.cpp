#include <iostream>
using namespace std;

int main(){
    string shopping_list[5] = {"Apples (500g)", "Chips (2 pkts)", "Milk (4 bottles)", "Rice (1.5kg)", "Chocolate (1 slab)"};
    for(string list_items : shopping_list){
        cout << list_items << '\n';
    }    
}