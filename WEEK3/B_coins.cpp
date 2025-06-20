#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> dp;

ll solve(ll n)
{
    if (n <= 3)
        return 1;
    if (dp.find(n) != dp.end())
        return dp[n];

    ll y = n / 4;
    ll result;
    if (y <= 3)
    {
        result = 2;
    }
    else
    {
        result = 2 * solve(y);
    }

    result = max(1LL, result);

    return dp[n] = result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}