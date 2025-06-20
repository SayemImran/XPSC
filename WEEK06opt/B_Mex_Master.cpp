#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll z = 0;
        bool one = false, large = false;

        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            if (x == 0)
                ++z;
            else if (x == 1)
                one = true;
            else if (x > 1)
                large = true;
        }

        ll res = 0;
        if (z > (n + 1) / 2)
        {
            if (!one || large)
                res = 1;
            else
                res = 2;
        }

        cout << res << endl;
    }

    return 0;
}
