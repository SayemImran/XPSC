#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> tempp(n);
        int plan_dy = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tempp[i];
            if (tempp[i] <= q)
            {
                plan_dy++;
            }
            else
            {
                plan_dy = 0;
            }
            ans += max(0, plan_dy - k + 1);
        }
        cout << ans << endl;
    }
    return 0;
}