#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    cout << n / 2 + n % 2 << endl;

    ll i = 1, j = 3 * n;

    while (i < j)
    {
        cout << i << " " << j << endl;
        i += 3;
        j -= 3;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}