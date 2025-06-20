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
        ll x, y;
        cin >> x >> y;
        ll z = (y + 1) / 2;
        x -= (15 * z - 4 * y);
        x = (x > 0 ? x : 0);
        z += (x + 14) / 15;
        cout << z << '\n';
    }
    return 0;
}