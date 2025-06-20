#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = 0, b = 0;
        int most_bit = 0;

        while ((1 << most_bit) <= x)
        {
            most_bit++;
        }
        b= 1 << (most_bit - 1);
        a = b ^ x;

        cout << a << " " << b << '\n';
    }
    return 0;
}