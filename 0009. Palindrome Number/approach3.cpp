// Reversing Number

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return 0;

    long long rev = 0;
    int temp = x;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (x == rev)
        return 1;
    return 0;
}

// TC = O(log x) or O(N) where N is number of digits in x
// SC = O(1)
// Here log base 10 is used