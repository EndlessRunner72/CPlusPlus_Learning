#include <iostream>
using namespace std;

int main(){
    int drink_choice, snack_choice, sides_choice;
    float payment_amount = 0, card_amount = 1000;
    cout << "Amount in your card: " << card_amount;
    cout << "Welcome to Cafe. \nSelect your drink: \n1: Tea \n2: Coffee \n3: Hot Cooca\nDefault: None\nYour choice: ";
    cin >> drink_choice;

    cout << "Select your snack: \n1: Sandwitch \n2: Apple Pie \n3: Pastry\nDefault: None\nYour choice: ";
    cin >> snack_choice;

    switch (drink_choice)
    {
    case 1:
        payment_amount += 50;
        break;
    
    case 2:
        payment_amount += 60;
        break;

    case 3:
        payment_amount += 100;
        break;
    
    default:
        break;
    }

    switch (snack_choice)
    {
    case 1:
        payment_amount += 70;
        break;
    
    case 2:
        payment_amount += 80;
        break;

    case 3:
        payment_amount += 160;
        break;
    
    default:
        cout << ((drink_choice > 3) ? "No items added to cart\n" : "");
        break;
    }

    if (payment_amount <= card_amount)
    {
        card_amount -= payment_amount;
        cout << "Total: " << payment_amount << "\tRemaining Amount: " << card_amount;
        cout << "\nSuccessful Order, collect it after 5 mins.\n";
    }
    else
    {
        cout << "Total: " << payment_amount << "\tRemaining Amount: " << card_amount;
        cout << "\nUnsuccessful Order, insufficient funds\n.";
    }
    
}