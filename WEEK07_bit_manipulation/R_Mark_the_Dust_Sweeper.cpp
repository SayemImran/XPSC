#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = 0, res = 0;
        for (ll p = 1; p < n; ++p)
        {
            cin >> x;
            res += x ? x : (res > 0);
        }

        cin >> x;
        cout << res << '\n';
    }

    return 0;
}
