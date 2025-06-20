#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        long cnt = 0;
        size_t idx = 0;

        while ((idx = s.find("mapie", idx)) != string::npos)
        {
            ++cnt;
            s[idx + 2] = '*';
            ++idx;
        }

        idx = 0;
        while ((idx = s.find("map", idx)) != string::npos)
        {
            ++cnt;
            s[idx + 1] = '*';
            ++idx;
        }

        idx = 0;
        while ((idx = s.find("pie", idx)) != string::npos)
        {
            ++cnt;
            s[idx + 1] = '*';
            idx += 2;
        }

        cout << cnt << '\n';
    }

    return 0;
}
