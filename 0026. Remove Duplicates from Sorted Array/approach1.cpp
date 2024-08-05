#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    {
        int result = 1;

        int ind = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                result++;
                ind++;
                nums[ind] = nums[i];
            }
        }

        return result;
    }