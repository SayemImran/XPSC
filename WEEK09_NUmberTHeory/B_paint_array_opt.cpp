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
        int n;
        cin >> n;

        vector<ll> v(n);
        for (auto &i : v)
            cin >> i;

        ll ans = 0, gcd1 = 0, gcd2 = 0;
        bool isOk = true;

        for (int i = 0; i < n; i += 2)
        {
            gcd1 = __gcd(gcd1, v[i]);
        }

        for (int i = 1; i < n; i += 2)
        {
            gcd2 = __gcd(gcd2, v[i]);
        }

        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % gcd1 == 0)
            {
                isOk = false;
                break;
            }
        }

        if (isOk)
        {
            ans = gcd1;
        }
        else
        {
            isOk = true;

            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % gcd2 == 0)
                {
                    isOk = false;
                    break;
                }
            }

            if(isOk){
                ans = gcd2;
            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}