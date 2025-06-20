#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, left, right, gcd = 0;
    cin >> left >> right;

    n = (right - left + 1) / 2;
    vector<pair<ll, ll>> v;

    for (ll i = 0; i < n; i++)
    {
        v.push_back(make_pair(left++, right--));
    }

    for (ll i = 0; i < n; i++)
    {
        gcd = __gcd(v[i].first, v[i].second);
        if (gcd > 1 && i + 1 < n)
        {
            swap(v[i].first, v[i + 1].second);
        }
    }

    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        gcd = __gcd(v[i].first, v[i].second);
        if (gcd != 1)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES\n";
        for (ll i = 0; i < n; i++)
        {
            cout << v[i].first << " " << v[i].second << '\n';
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
