#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,6,8,0,2,5};
    vector<int>::iterator it = nums.begin();

    cout << "Sorting (1,6,8,0,2,5) ascending order: \n";
    sort(nums.begin(), nums.end());

    for(int n : nums){
        cout << n << '\t';
    }

    cout << "\n\nSorting (1,6,8,0,2,5) descending order: \n";
    sort(nums.rbegin(), nums.rend());

    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << '\t';
    }

    vector<int> nums2 = {1,6,0,7,5,8,4};
    cout << "\n\nSorting (1,6,0,7,5,8,4) from 4rd element in ascending order: \n";
    sort(nums2.begin() + 3, nums2.end());   // For descending use (rbegin(), rbegin() + 4 or rend() - 3)
                                            // You can do +/- to determine range
    for(int n2 : nums2){
        cout << n2 << '\t';
    }

    cout << '\n';
}