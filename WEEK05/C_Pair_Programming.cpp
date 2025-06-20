#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sequences(int k, const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    int current_lines = k;
    vector<int> result;

    while (i < a.size() || j < b.size()) {
        bool moved = false;

        // ✅ Try Polycarp first
        if (j < b.size() && (b[j] == 0 || b[j] <= current_lines)) {
            result.push_back(b[j]);
            if (b[j] == 0) current_lines++;
            j++;
            moved = true;
        }
        // ✅ Then try Monocarp
        else if (i < a.size() && (a[i] == 0 || a[i] <= current_lines)) {
            result.push_back(a[i]);
            if (a[i] == 0) current_lines++;
            i++;
            moved = true;
        }

        if (!moved) return {-1}; // No valid move
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];

        vector<int> merged = merge_sequences(k, a, b);
        if (merged.size() == 1 && merged[0] == -1) {
            cout << -1 << '\n';
        } else {
            for (int x : merged) cout << x << ' ';
            cout << '\n';
        }
    }

    return 0;
}
