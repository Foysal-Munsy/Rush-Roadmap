//
// Created by Foysal Munsy on 19 / 04 / 2024
// Time: 20 : 14 : 06
//
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int k = 0; // keep tracking unique elements
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[k])
            {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1; // +1 is for O index!
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2}; // Example input
    int k = solution.removeDuplicates(nums);

    cout << "The number of unique elements in the array is: " << k << endl;

    return 0;
}
