#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        v.push_back(INF);
        int ans = 0;
        int prev = v[0];
        int curCount = 1;
        int prevGroup = 0;

        for (int i = 1; i <= n; i++)
        {
            if (v[i] == prev)
            {
                curCount++;
            }
            else
            {
                if (curCount < prevGroup)
                {
                    ans += (prevGroup - curCount);
                    prevGroup = curCount;
                }
                else
                {
                    prevGroup = curCount;
                }

                if (v[i] > prev + 1)
                {
                    ans += prevGroup;
                    prevGroup = 0;
                }

                curCount = 1;
            }

            prev = v[i];
        }

        cout << ans << endl;
    }

    return 0;
}
