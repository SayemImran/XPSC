#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binaarry_vai(vector<pair<ll, int>> &v, int l, int r, ll x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m].first == x)
            return m;
        if (v[m].first < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> v;
    for (int i = 0; i < n; ++i)
    {
        ll z;
        cin >> z;
        v.push_back({z, i + 1});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 2; j < n; ++j)
        {
            int y = binaarry_vai(v, i + 1, j - 1, x - v[i].first - v[j].first);
            if (y != -1)
            {
                cout << v[y].second << " " << v[j].second << " " << v[i].second << '\n';
                return 0;

            }
        }
    }
    cout << "IMPOSSIBLE\n";
}
