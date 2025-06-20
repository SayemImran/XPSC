#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    ll mn = LLONG_MAX;
    int total_subsets = 1 << n;

    for (int i = 0; i < total_subsets; ++i)
    {
        ll sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
                sum1 += a[j];
            else
                sum2 += a[j];
        }
        mn = min(mn, abs(sum1 - sum2));
    }
    cout << mn << '\n';
    return 0;
}
