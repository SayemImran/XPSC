#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);for (auto &i : a) cin >> i;

    map<int, int> freq;
    freq[0] = 1;

    ll sum = 0, ans = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        int mod = ((sum % n) + n) % n;
        ans += freq[mod];
        freq[mod]++;
    }

    cout << ans << '\n';
    return 0;
}
