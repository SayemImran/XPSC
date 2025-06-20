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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);
        for (ll &x : a)
            cin >> x;
        for (ll &x : b)
            cin >> x;

        ll A = 0;
        for (ll x : a)
            A ^= x;

        if (n % 2)
        {
            ll maxii = A;
            for (ll x : b)
                maxii |= x;
            cout << A << " " << maxii << '\n';
        }
        else
        {
            ll mini = A;
            for (ll x : b)
                mini &= ~x;
            cout << mini << " " << A << '\n';
        }
    }

    return 0;
}
