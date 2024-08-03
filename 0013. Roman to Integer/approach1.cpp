#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> mpp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int result = 0;

    // mpp['I'] = 1;
    // mpp['V'] = 5;
    // mpp['X'] = 10;
    // mpp['L'] = 50;
    // mpp['C'] = 100;
    // mpp['D'] = 500;
    // mpp['M'] = 1000;

    for (int i = 0; i < s.size(); i++)
    {
        if (i > 0 && mpp[s[i]] > mpp[s[i - 1]])
        {
            result += mpp[s[i]] - 2 * mpp[s[i - 1]];
        }
        else
        {
            result += mpp[s[i]];
        }
    }

    return result;
}