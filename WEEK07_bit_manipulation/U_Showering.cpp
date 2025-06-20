#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll s, m;
        cin >> n >> s >> m;

        vector<pair<ll, ll>> intervals(n);
        for (int i = 0; i < n; ++i) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool canShower = false;

        
        if (intervals[0].first >= s) {
            canShower = true;
        }

        for (int i = 1; i < n; ++i) {
            ll gap = intervals[i].first - intervals[i - 1].second;
            if (gap >= s) {
                canShower = true;
            }
        }

        if (m - intervals[n - 1].second >= s) {
            canShower = true;
        }

        cout << (canShower ? "YES" : "NO") << '\n';
    }

    return 0;
}
