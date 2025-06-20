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
        int n;
        cin >> n;
        vector<int> v(n);

        int total_xorr = 0;
        for (auto &i : v)
        {
            cin >> i;
            total_xorr ^= i;
        }

        int min_xor = total_xorr;

        for (int i = 0; i < n; i++)
        {
            int new_xor = total_xorr ^ v[i];
            min_xor = min(min_xor, new_xor);
        }

        cout << min_xor << "\n";
    }
    return 0;
}
