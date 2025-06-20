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
        ll n, k;
        cin >> n >> k;

        map<ll, ll> freq;
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }

        vector<ll> valid;
        for (auto [num, count] : freq)
        {
            if (count >= k)
            {
                valid.push_back(num);
            }
        }

        if (valid.empty())
        {
            cout << -1 << '\n';
            continue;
        }

        ll best_l = valid[0], best_r = valid[0], max_len = 0;
        ll l = valid[0], r = valid[0];

        for (ll i = 1; i < valid.size(); ++i)
        {
            if (valid[i] == valid[i - 1] + 1)
            {
                r = valid[i];
            }
            else
            {
                if (r - l > max_len)
                {
                    max_len = r - l;
                    best_l = l;
                    best_r = r;
                }
                l = r = valid[i];
            }
        }

        if (r - l > max_len)
        {
            best_l = l;
            best_r = r;
        }

        cout << best_l << " " << best_r << '\n';
    }

    return 0;
}
