#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, caseNo = 1;
    while (cin >> n >> q, n || q)
    {
        vector<int> marbles(n);for(auto &i : marbles) cin >> i;

        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << caseNo++ << ":\n";

        while (q--)
        {
            int x;
            cin >> x;
            
            auto it = lower_bound(marbles.begin(), marbles.end(), x);
            if (it != marbles.end() && *it == x)
            {
                cout << x << " found at " << (it - marbles.begin() + 1) << '\n';
            }
            else
            {
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}
