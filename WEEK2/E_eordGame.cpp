#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, pl = 3;
        cin >> n;

        map<string, vector<int>> mp;

        for (int i = 1; i <= pl; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(pl + 1);
        for (auto [wrd, plyr] : mp)
        {
            vector<int> tmp = plyr;

            if (tmp.size() == 1)
            {
                ans[tmp[0]] += 3;
            }
            if (tmp.size() == 2)
            {
                ans[tmp[0]] += 1;
                ans[tmp[1]] += 1;
            }
        }

        for (int i = 1; i <= pl; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}