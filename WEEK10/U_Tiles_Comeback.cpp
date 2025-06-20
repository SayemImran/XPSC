#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
        vector<ll> a(n);for (auto &i : a) cin >> i;

        ll shuru = a[0], khotom = a[n - 1];
        bool ok = false;

        if (shuru == khotom)
        {
            ll cntFrst = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == shuru)
                {
                    ++cntFrst;
                }
                if (cntFrst == k)
                {
                    ok = true;
                    break;
                }
            }
        }
        else
        {
            ll cnt = 0, i = 0;
            while (i < n)
            {
                if (a[i] == shuru)
                {
                    ++cnt;
                }
                if (cnt == k)
                    break;
                i++;
            }

            if (cnt == k)
            {
                ll secCnt = 0;
                for (ll j = i; j < n; j++)
                {
                    if (a[j] == khotom)
                    {
                        ++secCnt;
                    }
                    if (secCnt == k)
                    {
                        ok = true;
                        break;
                    }
                }
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
