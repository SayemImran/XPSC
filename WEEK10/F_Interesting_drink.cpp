#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int &x : prices)
        cin >> x;

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;

            int ans = upper_bound(prices.begin(), prices.end(), val) - prices.begin();
        cout << ans << '\n';
    }

    return 0;
}
