#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll total = a + b + c;

        if (total % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }
        ll target = total / 3;

        if (target >= a && target >= b && target <= c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
