#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (!(i % 2))
                v.push_back(x);
        }
        cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}