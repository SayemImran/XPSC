#include<bits/stdc++.h>
using namespace std;

const int mxBits = 20;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 1;
        for (int k = 0; k < mxBits; k++)
        {
            int prv = -1, mx = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] & 1 << k)
                    prv = i;

                mx = max(mx, i - prv + 1);
            }

            if (prv >= 0)
                ans = max(ans, mx);
        }

        cout << ans << endl;
    }

    return 0;
}