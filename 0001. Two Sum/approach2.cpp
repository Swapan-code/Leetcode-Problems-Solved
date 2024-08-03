// Sorting and Two Pointer Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<pair<int, int>> num_with_index;
    for (int i = 0; i < nums.size(); i++)
    {
        num_with_index.push_back({nums[i], i});
    }

    sort(num_with_index.begin(), num_with_index.end());

    int s = 0, e = nums.size() - 1;
    while (s < e)
    {
        if (num_with_index[s].first + num_with_index[e].first < target)
            s++;
        else if (num_with_index[s].first + num_with_index[e].first > target)
            e--;
        else
        {
            return {num_with_index[s].second, num_with_index[e].second};
        }
    }

    return {}; // if no solution
}

// TC = O(N*logN)
// SC = O(N)