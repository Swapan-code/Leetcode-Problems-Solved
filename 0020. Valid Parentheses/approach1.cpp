#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> mpp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    for (auto i : s)
    {
        if (i == '(' || i == '{' || i == '[')
        {
            st.push(i);
        }
        else
        {
            if (st.empty())
                return false;
            char ch = st.top();

            if (mpp[ch] == i)
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
    }

    if (st.empty())
        return true;
    return false;
}