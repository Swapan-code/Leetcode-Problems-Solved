// Converting to string

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // Conversion to String => O(log x)
    string s = to_string(x);

    // O(length of string) = O(log x)
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
            return false;
    }

    return true;
}

// TC = O(log x) or O(N) where N is number of digits in x
// SC = O(log x) or O(N) where N is number of digits in x
// Here log base 10 is used
