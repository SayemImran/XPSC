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
        ll n, k;
        cin >> n >> k;

        vector<ll> fruits(n), heights(n);
        for (auto &x : fruits)
            cin >> x;
        for (auto &x : heights)
            cin >> x;

        ll left = 0, right = 0;
        ll totalFruit = 0;
        ll ans = 0;

        while (right < n)
        {
            totalFruit += fruits[right];

            while (left < right && (heights[right - 1] % heights[right] != 0 || totalFruit > k))
            {
                totalFruit -= fruits[left];
                left++;
            }

            if (totalFruit <= k)
            {
                ans = max(ans, right - left + 1);
            }

            right++;
        }

        cout << ans << endl;
    }

    return 0;
}
