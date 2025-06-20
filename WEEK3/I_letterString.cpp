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
        vector<string> strings(n);

        for (int i = 0; i < n; i++)
        {
            cin >> strings[i];
        }

        map<string, int> freq;
        long long ans = 0;

        for (string s : strings)
        {

            for (int i = 0; i < 2; i++)
            {
                char original = s[i];
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (c == original)
                        continue;
                    s[i] = c;
                    ans += freq[s];
                }
                s[i] = original;
            }
            freq[s]++;// no match? update freq
        }

        cout << ans << endl;
    }
    return 0;
}
