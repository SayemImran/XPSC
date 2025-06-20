#include <bits/stdc++.h>
#define ll long long
#define loop(i,n)  for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);

    loop(i,n)
        cin >> a[i];

    loop(i,m)
        cin >> b[i];

    int l = 0, r = 0;
    ll anss = 0;

    while (l < n && r < m)
    {
        int counter1 = 0, counter2 = 0, current = a[l];

        while (l < n && a[l] == current)
        {
            counter1++;
            l++;
        }
        while(r<m && current > b[r]){
            r++;
        }
        while (r < m && b[r] == current)
        {
            counter2++;
            r++;
        }
        anss += (1LL * counter1 * counter2);
    }
    cout << anss << endl;
    return 0;
}