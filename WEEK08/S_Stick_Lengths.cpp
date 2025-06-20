#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, midAvg;
    cin >> n;
    vector<int> p(n);
    for (int &x : p)
    {
        cin >> x;
    }

    sort(p.begin(), p.end());
    midAvg = p[n / 2];

    ll ans = 0;
    for (const int &x : p)
    {
        ans += abs(midAvg - x);
    }

    cout << ans << "\n";
    return 0;
}
