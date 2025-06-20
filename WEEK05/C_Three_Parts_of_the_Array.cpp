#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<ll> prfx(n + 1, 0), sfx(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        prfx[i + 1] = prfx[i] + nums[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        sfx[i] = sfx[i + 1] + nums[i];
    }

    ll ans = 0;
    int l = 0, r = n;

    while (l <= r)
    {
        if (prfx[l] == sfx[r])
        {
            ans = prfx[l];
            l++;
            r--;
        }
        else if (prfx[l] < sfx[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << ans << endl;
    return 0;
}
