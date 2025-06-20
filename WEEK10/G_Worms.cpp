#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> worms(n);
    for (auto &i : worms)
        cin >> i;
    vector<int> prefixSum(n);
    prefixSum[0] = worms[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + worms[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto ans = lower_bound(prefixSum.begin(), prefixSum.end(), x) - prefixSum.begin() + 1;
        cout << ans << "\n";
    }
    return 0;
}