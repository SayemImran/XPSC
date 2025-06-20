#include <iostream>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        bool res(false);
        for (ll i = 0; !res && i < n; i++)
        {
            if (c[i] != a[i] && c[i] != b[i])
            {
                res = true;
            }
        }

        cout << (res ? "YES" : "NO") << endl;
    }
}