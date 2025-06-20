#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        if (k == 1)
        {
            cout << "Yes\n";
            continue;
        }

        vector<long long> diff(k - 1);
        for (int i = 1; i < k; i++)
        {
            diff[i - 1] = v[i] - v[i - 1];
        }

        bool sorted = is_sorted(diff.begin(), diff.end());

        if (!sorted)
        {
            cout << "No\n";
            continue;
        }

        if (v[0] <= diff[0] * 1LL * (n - k + 1))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
