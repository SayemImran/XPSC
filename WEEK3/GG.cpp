#include <bits/stdc++.h>
using namespace std;
void Checker()
{
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0;
    bool Checker = false;
    int Checker_idx = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            Checker = true;
        }
        Checker_idx = i;
        if (Checker)
        {
            if (s[i] == '0')
            {
                zero++;
            }
        }
    }

    cout << (n - Checker_idx - 1) + (Checker_idx - zero) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Checker();
    }
}