#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n > m || (n % 2 == 0 && m % 2 == 1))
        {
            cout << "NO" << '\n';
            continue;
        }
        else
        {
            cout << "YES" << '\n';
            if (n % 2 == 1)
            {

                for (int i = 1; i < n; i++)
                {
                    cout << "1 ";
                    m--;
                }
                cout << m << '\n';
            }
            else
            {
                for (int i = 1; i < n - 1; i++)
                {
                    cout << "1 ";
                    m--;
                }
                cout << m / 2 << " " << m / 2 << '\n';
            }
        }
    }
    return 0;
}