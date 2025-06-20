#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool prime_naki_vaya(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return 0;
            break;
        }
    return 1;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (prime_naki_vaya(n) == 1)
    {

        cout << 1 << endl;
    }
    else if (n % 2 and !prime_naki_vaya(n - 2))
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}
