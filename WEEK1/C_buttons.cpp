#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int maxCoins = 0;

    if (a > b)
    {
        maxCoins += a;
        a--;
    }
    else
    {
        maxCoins += b;
        b--;
    }
    if (a > b)
    {
        maxCoins += a;
    }
    else
    {
        maxCoins += b;
    }

    cout << maxCoins << endl;
    return 0;
}
