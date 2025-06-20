#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt[26] = {};
    for (char ch : s) {
        cnt[ch - 'A']++;
    }

    int odd_count = 0;
    char odd_char = '\0';
    string half;

    for (int i = 0; i < 26; ++i) {
        if (cnt[i] % 2) {
            odd_count++;
            odd_char = 'A' + i;
        }
        half += string(cnt[i] / 2, 'A' + i);
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string rst = half;
    if (odd_char) {
        rst += string(cnt[odd_char - 'A'], odd_char);
    }
    reverse(half.begin(), half.end());
    rst += half;

    cout << rst << '\n';
    return 0;
}
