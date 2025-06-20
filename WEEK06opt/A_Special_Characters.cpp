#include <iostream>
#define ll long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (ll i = 0; 2 * i < n; i++)
        {
            cout << ((i % 2) ? "AA" : "BB");
        }
        cout << endl;
    }
}