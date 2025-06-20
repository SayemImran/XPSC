#include <bits/stdc++.h>
using namespace std;

const int maxSetBit = 30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> countt(maxSetBit);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            countt[__lg(x)]++;
        }
        long long ans = 0;
        for (int i = 0; i < maxSetBit; i++)
        {
            ans += (1LL * countt[i] * (countt[i] - 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}