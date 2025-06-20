#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> coins(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    ll smallest = 1;
    for (int i = 0; i < n; ++i)
    {
        if (coins[i] > smallest)
        {
            break;
        }
        smallest += coins[i];
    }

    cout << smallest << "\n";
    return 0;
}
