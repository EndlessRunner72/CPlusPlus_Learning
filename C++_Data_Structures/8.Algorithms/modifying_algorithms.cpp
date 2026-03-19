#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // Copy a DS

    vector<int> nums_org = {2,6,8,0,3};
    vector<int> nums_copy(5);

    cout << "Original: \n";
    for (int n : nums_org)
    {
        cout << n << '\t';
    }

    // The arguments are ranges
    copy(nums_org.begin(), nums_org.end(), nums_copy.begin());
    cout << "\nCopy: \n";
    for (int n : nums_copy)
    {
        cout << n << '\t';
    }
    cout << '\n';
    
    // Filling a DS
    vector<int> fill_vector(9);
    // Arguments are ranges
    fill(fill_vector.begin(), fill_vector.end(), 21);
    cout << "\nFilled Vector: \n";
    for (int n : fill_vector)
    {
        cout << n << '\t';
    }
    cout << '\n';


}