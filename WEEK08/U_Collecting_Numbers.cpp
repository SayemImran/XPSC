#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 1;
    vector<int> ind(n+1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ind[x] = i;
    }
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (l > ind[i])
            cnt++;
        l = ind[i];
    }
    cout << cnt<<'\n';
    return 0;
}