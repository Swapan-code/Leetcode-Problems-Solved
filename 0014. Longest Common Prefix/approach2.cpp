// Sorting Approach

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int N = strs.size();
    sort(strs.begin(), strs.end()); // O(N log N)

    // Finding common prefix in O(m) where m is length of shortest string
    string result = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        if (strs[0][i] == strs[N - 1][i])
        {
            result += strs[0][i];
        }
        else
            break;
    }
    return result;
}