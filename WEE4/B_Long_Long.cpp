#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll sum = 0;
        bool preViousPositive = true;
        int count = 0;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                if (preViousPositive)
                {
                    preViousPositive = false;
                    count++;
                }
            }
            else if (v[i] > 0)
            {
                preViousPositive = true; 
            }
        }
        cout << sum << " " << count << endl;
    }
    return 0;
}


