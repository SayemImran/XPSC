#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, curr;
    cin >> n;
    vector<ll> V;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        auto it = upper_bound(V.begin(), V.end(), curr);
        if (it == V.end())
        {
            V.push_back(curr);
        }
        else
        {
            *it = curr;
        }
    }

    cout << V.size() << "\n";
}