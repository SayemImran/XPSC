#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 
    int day = 1, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= day)
        {
            count++;
            day++;
        }
    }

    cout << count << endl;
    return 0;
}
