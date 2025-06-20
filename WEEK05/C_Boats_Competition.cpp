#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        unordered_map<int, int> cnt;
        int mxpr = 0;

        vector<vector<bool>> used(n, vector<bool>(110, false));

        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int sum = a[i] + a[j];
                if (!used[i][sum] && !used[j][sum])
                {
                    cnt[sum]++;
                    used[i][sum] = true;
                    used[j][sum] = true;
                    mxpr = max(mxpr, cnt[sum]);
                }
            }
        }

        cout << mxpr << endl;
    }

    return 0;
}
