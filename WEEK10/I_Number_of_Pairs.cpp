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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> nums(n);
        for (auto &i : nums)
            cin >> i;

        ll count = 0;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            ll ii = l-nums[i];
            ll jj = r-nums[i]; // i ta ke fix rekhe j er jonne valid lower and upper bound ber korlei done... XD

            auto minn = lower_bound(nums.begin()+i+1, nums.end(),ii);
            auto maxx = upper_bound(nums.begin()+i+1, nums.end(),jj);

            count += (maxx-minn);
        }

        cout << count << "\n";
    }
    return 0;
}