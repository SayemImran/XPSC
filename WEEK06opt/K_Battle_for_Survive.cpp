#include <bits/stdc++.h>
#define ll long long
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
        cin >> n;

        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (i == n - 2)
            {
                sum -= x;
            }
            else
            {
                sum += x;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}
