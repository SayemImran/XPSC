#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool inserted = false;

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                char insertChar = (s[i] == 'a') ? 'b' : 'a';
                s.insert(i, 1, insertChar);
                inserted = true;
                break;
            }
        }

        if (!inserted) {
           
            char insertChar = (s[0] == 'a') ? 'b' : 'a';
            s = insertChar + s;
        }

        cout << s << endl;
    }
    return 0;
}
