#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> diffs(n);
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            int cur = 0;
            if (s[i] == 'L')
                cur = i;
            else
                cur = n - i - 1;

            sum += cur;

            ll mx = max(i, n - i - 1); // jehetu max nibo tai check korbo oi i e L R er moddhe ke maximum value dite parto
            diffs[i] = mx - cur;
        }
        sort(diffs.rbegin(), diffs.rend());

        for (ll i = 0; i < n; i++)
        {
            sum += diffs[i];
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}


/*
    https://vjudge.net/solution/59813939
    8/4/2025
*/