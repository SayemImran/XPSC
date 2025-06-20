#include<bits/stdc++.h>
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
        ll cum_s = 0, mx = -1, cnt = 0;
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            mx = max(mx, x);
            cum_s += x;
            if (cum_s == 2 * mx)
            {
                ++cnt;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
