#include <iostream>
#include <functional>                                      // To get function keyword
using namespace std;

void call_lambda_function(function<void()> func){         // Passing lambda function in argument
    func();
    func();
}

int main(){
    auto message = [](){                       // Lambda with no parameters
        cout << "Hello World!\n";
    };

    auto add = [](int a, int b){               // Lambda with 2 parameters
        return a + b;
    };

    int x = 10;
    // To pass variable outside the function (here refrenc variable is passed but regular [x] can be passed too)
    auto change_val = [&x](){                  
        x = 15;
    };

    message();
    cout << add(5, 4) << '\n';
    change_val();
    cout << "Value of x after changing: " << x << '\n';
    call_lambda_function(message);
}

// [] = Variable outide the function
// () = parameters of the function

// function<void()> func = if lambda function is "add" then it will be function<int(int,int)> func
//                         and "add" will be executed as fun(3, 5)