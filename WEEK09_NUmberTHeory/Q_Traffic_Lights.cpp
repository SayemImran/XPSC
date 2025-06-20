#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, x;
    cin >> x >> n;

    set<ll> pt = {0, x};
    multiset<ll> lens = {x};

    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;

        auto it = pt.upper_bound(temp);

        ll leftt = *prev(it);
        ll rightt = *it;

        lens.erase(lens.find(rightt - leftt));

        lens.insert(temp - leftt);
        lens.insert(rightt - temp);

        pt.insert(it, temp);

        cout << *lens.rbegin() << " ";
    }
}