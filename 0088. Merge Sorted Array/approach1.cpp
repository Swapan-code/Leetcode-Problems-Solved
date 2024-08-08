// Using temporary array
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }

    // if elements left in nums1
    while (i < m)
    {
        v.push_back(nums1[i]);
        i++;
    }

    // if elements left in nums2
    while (j < n)
    {
        v.push_back(nums2[j]);
        j++;
    }

    nums1 = v;
}