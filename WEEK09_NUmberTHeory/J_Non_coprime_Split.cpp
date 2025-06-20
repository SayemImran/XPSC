#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        if (r <= 3)
        {
            cout << -1 << '\n';
        }
        else if (l == r)
        {
            ll x = -1;
            for (ll i = 2; i * i <= r; ++i)
            {
                if ((r - i) % i == 0)
                {
                    x = i;
                    break;
                }
            }
            if (x > 0)
            {
                cout << x << " " << r - x << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else
        {
            ll b = r - r % 2 - 2;
            cout << 2 << " " << b << '\n';
        }
    }

    return 0;
}
