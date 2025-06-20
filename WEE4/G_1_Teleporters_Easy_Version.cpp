#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, b;
        cin >> n >> b;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += (i + 1);
        }

        sort(v.begin(), v.end());

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= b)
            {
                b -= v[i];
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
