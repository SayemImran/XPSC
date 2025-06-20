#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;

        ll maxI_odd = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2)
            {
                maxI_odd = max(maxI_odd, x);
            }
            else
            {
                v.push_back(x);
            }
        }

        if (v.size() == n)
        {
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());
        ll cnt = v.size();

        for (ll i = 0; i < v.size(); i++)
        {
            if (maxI_odd > v.back())
            {
                break;
            }
            else if (maxI_odd < v[i])
            {
                ++cnt;
                break;
            }
            else
            {
                maxI_odd += v[i];
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
