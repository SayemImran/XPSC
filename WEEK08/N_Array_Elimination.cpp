#include <bits/stdc++.h>
using namespace std;

int gcdd(int a, int b)
{
    while(b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const int maxBits = 30;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> cnt(maxBits, 0);

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            for (int j = 0; j < maxBits; j++)
            {
                cnt[j] += (a >> j) & 1;
            }
        }

        int g = 0;
        for (int i = 0; i < maxBits; i++)
        {
            g = gcdd(g, cnt[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            if (g % i == 0)
            {
                cout << i << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
