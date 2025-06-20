#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n + 1);
        map<ll, ll> mp;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }

        ll mx = 0;
        for (auto &x : mp)
        {
            for (auto &y : mp)
            {
                if (__gcd(x.first, y.first) == 1)
                {
                    mx = max(mx, x.second + y.second);
                }
            }
        }

        cout << (mx ? mx : -1) << '\n';
    }

    return 0;
}
