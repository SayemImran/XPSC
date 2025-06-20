#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0;
        int ops = 0;

        while (l < n)
        {
            if (s[l] == 'B')
            {
                ops++;
                l += k;
            }
            else
            {
                l++;
            }
        }

        cout << ops << endl;
    }

    return 0;
}
