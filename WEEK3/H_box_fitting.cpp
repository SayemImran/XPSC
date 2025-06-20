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
        int n;
        long long W;
        cin >> n >> W;

        map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int height = 0;
        int placed = 0;

        while (placed < n)
        {
            long long space = W;

            for (auto it = freq.rbegin(); it != freq.rend(); ++it)
            {
                int width = it->first;
                int &count = it->second;

                while (count > 0 && space >= width)
                {
                    int canPlace = min(count, (int)(space / width));
                    space -= 1LL * canPlace * width;
                    count -= canPlace;
                    placed += canPlace;
                }
            }

            height++;
        }

        cout << height << '\n';
    }

    return 0;
}
