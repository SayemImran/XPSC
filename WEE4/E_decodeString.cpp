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
        string str;
        cin >> str;

        string decoded = "";

        for (int i = n - 1; i >= 0;)
        {
            if (str[i] != '0')
            {
                int num = str[i] - '0';
                decoded += (char)('a' + num - 1);
                i--;
            }
            else
            {
                int num = (str[i - 2] - '0') * 10 + (str[i - 1] - '0');
                decoded += (char)('a' + num - 1);
                i -= 3;
            }
        }

        reverse(decoded.begin(), decoded.end());
        cout << decoded << endl;
    }

    return 0;
}
