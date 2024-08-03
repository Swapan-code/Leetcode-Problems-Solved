// Converting to string

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // Conversion to String => O(log x)
    string s = to_string(x);

    // String Copy => O(length of string) = O(log x)
    string y = s;

    // Reversing String => O(length of string) = O(log x)
    reverse(y.begin(), y.end());

    // String Comparison => O(length of string) = O(log x)
    return s == y ? true : false;
}

// TC = O(log x) or O(N) where N is number of digits in x
// SC = O(log x) or O(N) where N is number of digits in x
// Here log base 10 is used
