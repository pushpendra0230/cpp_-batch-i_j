#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) 
        {
            return 0;
        }
        
        int uniquenumber = 1;  // Keeps track of the count of unique numbers.

        // Iterate from the second element in the array.
        for (int i = 1; i < nums.size(); i++) 
        {
            // If the current element is different from the previous one, it's unique.
            if (nums[i - 1] != nums[i]) 
            {
                // Place the unique element at the current unique index.
                nums[uniquenumber] = nums[i];
                uniquenumber++;
            }
        }
        
        return uniquenumber;  // Return the count of unique elements.
    }
};

int main()
 {
    Solution solution;  // Created the object 'solution' instead of 'sol'.
    vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
    
    int newLength = solution.removeDuplicates(nums);

    cout << "Number of unique elements: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
