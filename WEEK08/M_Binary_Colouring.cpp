#include <bits/stdc++.h>
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
        ll x;
        cin >> x;
        vector<ll> v;

        while (x)
        {
            v.push_back(x % 2);
            x /= 2;
        }

        bool carry = false;
        for (ll i = 1; i < v.size(); i++)
        {
            if(v[i - 1] && v[i])
            {
                v[i - 1] = -1;
                v[i] = 0;
                carry = true;
            }
            else if(v[i] && carry)
            {
                v[i] = 0;
            }
            else if(v[i])
            {
                continue;
            }
            else if(carry)
            {
                v[i] = 1;
                carry = false;
            }
        }

        if (carry)
        {
            v.push_back(1);
        }

        cout << v.size() << "\n";
        for (ll val : v)
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
