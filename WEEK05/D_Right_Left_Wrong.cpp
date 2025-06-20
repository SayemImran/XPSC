#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
    }

    string s;
    cin >> s;

    int left = 0, right = n - 1;
    ll total = 0;

    while (left < right)
    {

        while (left < right && s[left] != 'L')
        {
            left++;
        }

        while (left < right && s[right] != 'R')
        {
            right--;
        }

        if (left < right)
        {
            
            total += prefix[right + 1] - prefix[left];
            left++;
            right--;
        }
    }

    cout << total << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
