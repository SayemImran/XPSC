#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> ans;

        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                ll valuu = n - (1LL << k);

                if (valuu > 0)
                    ans.push_front(valuu);
            }
        }
        ans.push_back(n);
        cout << ans.size() << '\n';
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}