#include <iostream>
using namespace std;

int main(){
    int arr1[][3] = {
        {2, 5, 7},
        {1, 4, 7},
        {2, 5, 7},
        {1, 9, 9}
    };
    
    int arr2[][3] = {
        {2, 7, 0},
        {1, 4, 6},
        {6, 8, 2},
        {1, 8, 4}
    };

    int add[sizeof(arr1) / sizeof(arr1[0])][sizeof(arr1[0]) / sizeof(arr1[0][0])];

    for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
    {
        for (int j = 0; j < (sizeof(arr1[0]) / sizeof(arr1[0][0])); j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    cout << "Addition answer: \n";
    for (auto& row : add){
        for ( int num : row){
            cout << num << ' ';
        }
        cout << '\n';
    }

    cout << "\n Process: \n";
    for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
    {
        for (int j = 0; j < (sizeof(arr1[0]) / sizeof(arr1[0][0])); j++)
        {
            cout << arr1[i][j] << ' ';
        }

        cout << ((i == (sizeof(arr1) / sizeof(arr1[0])) / 2) ? "+ " : "  ");
        
        for (int k = 0; k < (sizeof(arr1[0]) / sizeof(arr2[0][0])); k++)
        {
            cout << arr2[i][k] << ' ';
        }

        cout << ((i == (sizeof(arr1) / sizeof(arr1[0])) / 2) ? "= " : "  ");
        
        for (int l = 0; l < (sizeof(arr1[0]) / sizeof(arr2[0][0])); l++)
        {
            cout << add[i][l] << ' ';
        }
        
        cout << '\n';
    }
    
}