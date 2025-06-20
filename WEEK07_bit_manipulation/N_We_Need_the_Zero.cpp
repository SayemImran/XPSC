#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll xrr = 0;
        for (int i = 0; i < n; i++)
            xrr = (arr[i] ^ xrr);

        if (xrr == 0)
            cout << 0 << '\n';
        else if (n & 1)
            cout << xrr << '\n';
        else
            cout << -1 << '\n';
    }
}