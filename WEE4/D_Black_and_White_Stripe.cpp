#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cin.ignore();
        string str;
        cin >> str;

        int l = 0, r = 0, ans = INT_MAX;
        int wCount = 0;
        while (r < n)
        {
            if (str[r] == 'W')
            {
                wCount++;
            }
            if (r - l + 1 < k)
            {
                r++;
            }
            else if (r - l + 1 == k)
            {

                ans = min(ans, wCount);
                if (str[l] == 'W')
                {
                    wCount--;
                }
                l++;
                r++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}