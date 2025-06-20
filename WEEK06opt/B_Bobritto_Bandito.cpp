#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, l, r;
        cin >> n >> m >> l >> r;
        ll left = (l > -m ? l : -m);
        ll right = left + m;
        cout << left << " " << right << endl;
    }
}