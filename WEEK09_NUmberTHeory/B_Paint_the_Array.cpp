#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

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
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll x = 0, y = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                x = gcd(x, a[i]);
            }
            else
            {
                y = gcd(y, a[i]);
            }
        }

        bool g_x_ = true, g_y_ = true;
        for (ll i = 0; i < n; ++i)
        {
            if (i % 2 == 0 && a[i] % y == 0)
            {
                g_y_ = false;
            }
            if (i % 2 == 1 && a[i] % x == 0)
            {
                g_x_ = false;
            }
        }

        if (g_x_)
        {
            cout << x << '\n';
        }
        else if (g_y_)
        {
            cout << y << '\n';
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
