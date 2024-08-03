// Optimizing previous approach to one pass only

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> num_to_index;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (num_to_index.find(complement) != num_to_index.end())
        {
            return {i, num_to_index[complement]};
        }
        else
        {
            num_to_index[nums[i]] = i;
        }
    }

    return {}; // if no solution
}

// TC = O(N)
// SC = O(N)