#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    while (cin >> n)
    {
        vector<ll> arr(n);
        ll mx = 0, ans = 0, GCD = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == mx)
                continue;
            ans += (mx - arr[i]);
            GCD = __gcd(GCD, mx - arr[i]);
        }
        ll rst = ans/GCD;
        ll rst1 = GCD;
        cout << rst << " " << rst1 << '\n';
    }

    return 0;
}
