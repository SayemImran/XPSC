#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<long long> pq;
        long long res = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (x)
            {
                pq.push(x);
            }
            else if (!pq.empty())
            {
                res += pq.top();
                pq.pop();
            }
        }

        cout << res << endl;
    }

    return 0;
}
