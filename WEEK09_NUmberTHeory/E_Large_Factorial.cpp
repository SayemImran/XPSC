#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1000000007;
const int MAXN = 1001;

ll factorial[MAXN];

void facT_er_ager_hishab()
{
    factorial[0] = 1;
    for (int i = 1; i < MAXN; ++i)
    {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    facT_er_ager_hishab();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << factorial[n] << '\n';
    }

    return 0;
}
