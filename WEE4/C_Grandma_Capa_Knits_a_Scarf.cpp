#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ans = inf;

        for (char c = 'a'; c <= 'z'; c++)
        {
            int l = 0, r = n - 1; 
            int cnt = 0;          

            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    
                    l++;
                    r--;
                }
                else if (s[l] == c)
                {
                  
                    cnt++;
                    l++;
                }
                else if (s[r] == c)
                {
                   
                    cnt++;
                    r--;
                }
                else
                {
                    
                    cnt = inf;
                    break;
                }
            }

            ans = min(ans, cnt); 
        }

        if (ans == inf)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
