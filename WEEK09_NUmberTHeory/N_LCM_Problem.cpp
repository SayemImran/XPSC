#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll x = 0, y = 0;
        if (l * 2 <= r)
        {
            x = l;
            y = l * 2;
        }
        else
        {
            x = -1;
            y = -1;
        }

        cout << x << " " << y << '\n';
    }

    return 0;
}
