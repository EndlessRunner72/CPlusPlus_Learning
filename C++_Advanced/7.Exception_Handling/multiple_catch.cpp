#include<iostream>
#include<string>
using namespace std;

struct error{
    int error_no;
    string error_msg;
};

int main(){
    int err_choice;
    cout << "1.Integer\n2.String\n3.Error Structure\n4.Unknown Command\n";
    cout << "Enter the choice of error: ";
    cin >> err_choice;

    try{
        switch (err_choice)
        {
        case 1:
            throw 235;
            break;
        
        case 2:{
                // string error_string = "Server Not Found\n"; 
                throw "Server not found\n";
                break;
            }

        case 3:
            throw error{404, "File not found\n"};
            break;

        case 4:
            throw 23.5;
            break;
        
        default:
            cout << "No such choice\n";
            break;
        }
    }
    catch(int num){
        cout << "Integer error: " << num << '\n';
    }

    catch(const char* e){                // No var so; no "string e"
        cout << e;
    }
    catch(error e){
        cout << e.error_no << ':' << e.error_msg;
    }
    catch(...){                                         // Catches all type of error
        cout << "Unknown Error type\n";
    }
}