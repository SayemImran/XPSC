#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> m;
        ll cnt = 0;

        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            ++m[x];
            cnt = max(cnt, m[x]);
        }

        ll res = 0;
        while (cnt < n)
        {
            ll diff = min(cnt, n - cnt);
            res += 1 + diff;
            cnt *= 2;
        }

        cout << res << '\n';
    }

    return 0;
}
