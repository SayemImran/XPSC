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
        int N, X;
        cin >> N >> X;

        vector<int> P(N + 1, 0);
        vector<bool> used(N + 1, false);

        for (int i = 1; i <= N; ++i)
        {
            int val = i ^ X;
            if (val >= 1 && val <= N && !used[val])
            {
                P[i] = val;
                used[val] = true;
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            if (P[i] == 0)
            {
                for (int j = 1; j <= N; ++j)
                {
                    if (!used[j])
                    {
                        P[i] = j;
                        used[j] = true;
                        break;
                    }
                }
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            cout << P[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
