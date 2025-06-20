#include<bits/stdc++.h>
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
        ll n, m;
        cin >> n >> m;

        ll l = max(0LL, n - m);
        ll r = n + m;

        ll ans = 0;

        for (int i = 0; i < 32; i++)
        {
            ll lx = l >> i;
            ll rx = r >> i;

            bool bit_can_be_set = false;

            if (lx & 1)
            {
                bit_can_be_set = true;
            }

            if ((rx - lx) + 1 >= 2)
            {
                bit_can_be_set = true;
            }

            if (bit_can_be_set)
            {
                ans |= (1LL << i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
