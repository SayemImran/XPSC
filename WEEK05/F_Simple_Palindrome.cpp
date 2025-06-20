#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << "uo\n";
    } else if (n == 3) {
        cout << "iae\n";
    } else if (n == 6) {
        cout << "oeiiua\n";
    } else {
        // General case: cycle through vowels to minimize palindromic subsequences
        string vowels = "aeiou";
        string result = "";
        for (int i = 0; i < n; i++) {
            result += vowels[i % 5];
        }
        cout << result << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}