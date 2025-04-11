#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> stored(n);
        map<int, bool> mp;

        for (int i = 0; i < n; i++) {
            cin >> stored[i];
        }

        int moveCount = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (mp.count(stored[i]) == 0) {
                mp[stored[i]] = true;
                moveCount++;
            } else {
                break;
            }
        }

        cout << n - moveCount << endl;
    }

    return 0;
}
