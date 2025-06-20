#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<ll, ll> freq;
    int l = 0, r = 0;
    ll ans = 0;

    while (r < n)
    {

        freq[a[r]]++;
        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                freq.erase(a[l]);
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}
