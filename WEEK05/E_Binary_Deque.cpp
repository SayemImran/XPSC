#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int sums = 0;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
            if (i == 1)
            {
                sums++;
            }
        }

        if (sums < s)
        {
            cout << -1 << endl;
            continue;
        }
        if (sums == s)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        int l = 0, r = 0, curren = 0;

        while (r < n)
        {
            curren += v[r];
            while (curren > s)
            {
                curren -= v[l];
                l++;
            }
            if (curren == s)
            {
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        cout << n - ans << endl;
    }
    return 0;
}
