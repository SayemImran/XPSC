#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int idx = 0;
        for (int i = 1; i < n; ++i)
        {
            if (v[i - 1] > v[i])
                idx = i;
        }

        int prev = v[idx];
        bool isSorted = true;
        for (int i = 1; i < n && isSorted; ++i)
        {
            int j = (i + idx) % n;
            if (prev > v[j])
                isSorted = false;
            prev = v[j];
        }

        cout << (isSorted ? "Yes" : "No") << '\n';
    }
}
