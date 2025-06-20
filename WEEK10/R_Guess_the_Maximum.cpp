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

        ll prev;
        cin >> prev;

        ll mx = 1e9 + 7;
        for (ll i = 1; i < n; ++i)
        {
            ll x;
            cin >> x;
            ll cur = max(x, prev);
            mx = min(mx, cur);
            prev = x;
        }

        cout << mx - 1 << '\n';
    }

    return 0;
}
