#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll find_mex(const vector<ll> &v)
{
    ll n = v.size();
    vector<bool> vec(n + 2, false);
    for (auto x : v)
    {
        if (x <= n)
            vec[x] = true;
    }
    for (ll i = 0; i <= n + 1; ++i)
    {
        if (!vec[i])
            return i;
    }
    return n + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll max_iter = min(k, n + 2LL);
        for (ll ii = 0; ii < max_iter; ++ii)
        {
            vector<ll> new_a = a;
            ll mex = find_mex(a);
            for (ll i = 0; i < n; ++i)
            {
                new_a[i] = mex;
                mex = a[i];
            }
            if (new_a == a)
                break;
            a = new_a;
        }

        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
