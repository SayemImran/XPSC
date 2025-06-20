#include <bits/stdc++.h>
using namespace std;

bool stringMatcher(vector<int> &a, string &s)
{
    if (a.size() != s.size())
        return false;

        map<int, char> value_to_char;
        map<char, int> char_to_value;

    for (int i = 0; i < a.size(); ++i)
    {
        int val = a[i];
        char ch = s[i];

        //if found then check is same as the character
        if (value_to_char.count(val))
        {
            if (value_to_char[val] != ch)
                return false;
        }
        else
        {
            value_to_char[val] = ch;
        }

        // if char found already then check if it is same as the value or not
        if (char_to_value.count(ch))
        {
            if (char_to_value[ch] != val)
                return false;
        }
        else
        {
            char_to_value[ch] = val;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (stringMatcher(a, s))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
