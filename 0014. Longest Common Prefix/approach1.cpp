// Finding lastIndex till each string is common by comparing with first string one by one

#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

string longestCommonPrefix(vector<string> &strs)
{

    int lastIndex = strs[0].size();

    for (int i = 1; i < strs.size(); i++)
    {
        lastIndex = min(lastIndex, strs[i].size());

        for (int j = 0; j < strs[i].size(); j++)
        {
            if (strs[i][j] != strs[0][j])
            {
                lastIndex = min(j, lastIndex);
                break;
            }
        }
    }

    string result = "";
    for (int i = 0; i < lastIndex; i++)
    {
        result += strs[0][i];
    }
    return result;
}