#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);for (auto &i : a)cin >> i;

    map<int, int> freq;
    ll ans = 0;
    int l = 0, r = 0, distinct = 0;

    while (l < n)
    {
        while (r < n && distinct + (freq[a[r]] == 0) <= k)
        {
            if (++freq[a[r]] == 1)
                distinct++;
            r++;
        }

        ans += r - l;

        if (--freq[a[l]] == 0)
            distinct--;
        l++;
    }

    cout << ans << '\n';
}
