// Using map

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    unordered_map<int, int> num_to_index;
    for (int i = 0; i < nums.size(); i++) {
        num_to_index[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_to_index.find(complement) != num_to_index.end() && num_to_index[complement] != i) {
            return {i, num_to_index[complement]};
        }
    }

    return {}; // if no solution
}

// TC = O(N)
// SC = O(N)