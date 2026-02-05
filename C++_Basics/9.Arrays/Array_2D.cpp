#include <iostream>
using namespace std;

int main(){
    char characters[][4] = {               // Outer most array is okay if not defned
        {'a', 'b', 'c', 'd'},              // 2D Arrays are in format of 'rows' and 'columns'
        {'e', 'f', 'g', 'h'}
    };

    for (int i = 0; i < (sizeof(characters) / sizeof(characters[0])); i++)
    {
        for (int j = 0; j < (sizeof(characters[0]) / sizeof(characters[0][0])); j++)
        {
            cout << characters[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';
    for(const auto& row : characters){         // For each printing
        for(char ch : row){
            cout << ch << ' ';
        }
        cout << '\n';
    }

    return 0;
}