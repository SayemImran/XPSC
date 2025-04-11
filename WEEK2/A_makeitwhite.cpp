#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sz;
        cin >> sz;
        cin.ignore();
        string s;
        cin >> s;

        s = s.substr(0, sz);

        int w_count = 0;

        for (auto itm : s)
        {
            if (itm == 'W')
                w_count++;
            else
                break;
        }
        int w_c_last = 0;
        for (int i = sz - 1; i > 0; i--)
        {
            if (s[i] == 'W')
                w_c_last++;
            else
            {
                break;
            }
        }
        cout << sz - (w_count + w_c_last) << endl;
    }
    return 0;
}

/*
    https://vjudge.net/solution/59752236
*/