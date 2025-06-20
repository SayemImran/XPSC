#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;

    while (t--)
    {
        long n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        set<long> posSet;
        for (long i = 0; i < m; i++)
        {
            long x;
            cin >> x;
            posSet.insert(--x);
        }

        string r;
        cin >> r;

        sort(r.begin(), r.end());

        long idx = 0;
        for (auto it = posSet.begin(); it != posSet.end(); ++it)
        {
            s[*it] = r[idx++];
        }

        cout << s << endl;
    }

    return 0;
}
