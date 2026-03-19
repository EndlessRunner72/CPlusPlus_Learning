#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Find function finds first instance only of the element
int main(){
    vector<int> nums = {1,7,3,4,1,9,2};
    vector<int>::iterator it;

    it = find(nums.begin(), nums.end(), 2);

    if (it == nums.end())
    {
        cout << "Number 2 wasn't found\n";
    }
    else
    {
        cout << "Number 2 was found\n";        
    }
    
    cout << "\nIs number 1 in between 2nd and 5th position?? \n";
    // Willnot search 5th element only searches (7,3,4,1) not 9
    // Pointer stops at +5 hence doesnt read it just like end
    auto iter = find(nums.begin() + 1, nums.begin() + 5, 1);  

    if (iter == nums.begin() + 5)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
    
    cout << "\nTo find if nums are greater than 6 in a vector\n";
    vector<int> nums2 = {2,4,6,9,10};   //Can also use sort()

    // Finds first instance
    auto iterate = upper_bound(nums2.begin(), nums2.end(), 6); // Upper and lower bound works on sorted DS
    cout << "Element: " << *iterate << '\n';        // Zero/Garbage value means value not found


    // FOr min and max element sorted array not needed
    cout << "\nMax Value in nums: " << *(max_element(nums.begin(), nums.end()));
    cout << "\nMin Value in nums: " << *(min_element(nums.begin(), nums.end())) << '\n';

}