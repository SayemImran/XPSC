#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout<< a << ' ' << a * b << ' ' << a * (b + 1) << '\n';
            /*
                find three number where 2 numbers are divsible by a*b and a and the third one will be the sum
                of the previous two
            */
        }
    }
}