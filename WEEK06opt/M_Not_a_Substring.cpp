#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        string a(n, '(');
        a += string(n, ')');
        string b = "";
        for (int i = 0; i < n; ++i)
            b += "()";

        if (a.find(s) == string::npos)
        {
            cout << "YES\n"
                 << a << '\n';
        }
        else if (b.find(s) == string::npos)
        {
            cout << "YES\n"
                 << b << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
