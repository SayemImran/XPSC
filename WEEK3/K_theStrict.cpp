#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, m, q;
        cin >> n >> m >> q;
        vector<long> b(m);
        for (long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        while (q--)
        {
            long dv;
            cin >> dv;
            long pos = upper_bound(b.begin(), b.end(), dv) - b.begin();
            long res(0);
            if (!pos)
            {
                res = b[0] - 1;
            }
            else if (pos == m)
            {
                res = n - b.back();
            }
            else
            {
                res = (b[pos] - b[pos - 1]) / 2;
            }
            cout << res << endl;
        }
    }
}