#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 0 && n <= 9999)
    {
        string cnvrt = to_string(n);
        int sz = 4 - cnvrt.size();

        if (sz > 0)
        {
            string ss(sz, '0');
            cout << ss + cnvrt << endl;
        }
        else
        {
            cout << cnvrt << endl;
        }
    }

    return 0;
}
