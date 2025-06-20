#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   
    int n, k;
    cin >> n >> k;

    vector<ll> u(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> u[i];
    }

    map<ll, int> src_station, dst_statione;

    for (int i = 0; i < n; ++i)
    {
        if (!src_station.count(u[i]))
        {
            src_station[u[i]] = i;
        }
        dst_statione[u[i]] = i;
    }

   
    while (k--)
    {
        ll a, b;
        cin >> a >> b;

        if (src_station.count(a) && dst_statione.count(b) &&
            src_station[a] < dst_statione[b])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}