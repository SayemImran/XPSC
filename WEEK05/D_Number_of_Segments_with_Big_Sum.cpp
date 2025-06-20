#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    ll s;
    cin >> n >> s;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        while(sum >= s && l <= r)
        {
            ans += n-r;
            sum -= v[l++];
        }
        r++;

    }
   cout<<ans<<endl;
    return 0;
}