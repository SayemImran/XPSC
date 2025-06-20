#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        ll v[7] = {0};
        for (char c : s) {
            ++v[c - 'A'];
        }

        ll cnt = 0;
        for (int i = 0; i < 7; ++i) {
            ll diff = m - v[i];
            if (diff > 0) {
                cnt += diff;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
