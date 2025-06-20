#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> orginalArr(n);
        for (auto &i : orginalArr)
            cin >> i;

        sort(orginalArr.rbegin(), orginalArr.rend());

        vector<ll> prefix(n, 0);
        prefix[0] = orginalArr[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + orginalArr[i];
        }

        while (q--)
        {
            ll x;
            cin >> x;
            ll ans = -1;

            auto it = lower_bound(prefix.begin(), prefix.end(), x);
            if (it != prefix.end())
            {
                ans = it - prefix.begin() + 1;
            }

            cout << ans << "\n";
        }
    }
    return 0;
}
