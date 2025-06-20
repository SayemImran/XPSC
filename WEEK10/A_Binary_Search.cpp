#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < k; i++)
    {
        ll key;
        cin >> key;

        int l = 0, r = n - 1, mid;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == v[mid])
            {
                found = true;
                break;
            }
            else if (key < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}