#include <bits/stdc++.h>
using namespace std;

int getInitialBeauty(const string &s, int &suffixLen, char &suffixChar) {
    int maxBeauty = 1;
    int currLen = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            currLen++;
        } else {
            currLen = 1;
        }
        maxBeauty = max(maxBeauty, currLen);
    }

    // find suffix info
    suffixLen = 1;
    suffixChar = s.back();
    for (int i = s.size() - 2; i >= 0; --i) {
        if (s[i] == suffixChar) {
            suffixLen++;
        } else break;
    }
    return maxBeauty;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;

        int suffixLen;
        char suffixChar;
        int maxBeauty = getInitialBeauty(S, suffixLen, suffixChar);

        vector<int> result;
        result.push_back(maxBeauty);

        for (int i = 0; i < Q; ++i) {
            char c;
            cin >> c;
            if (c == suffixChar) {
                suffixLen++;
            } else {
                suffixChar = c;
                suffixLen = 1;
            }
            maxBeauty = max(maxBeauty, suffixLen);
            result.push_back(maxBeauty);
        }

        for (int i = 0; i <= Q; ++i) {
            cout << result[i] << " \n"[i == Q];
        }
    }

    return 0;
}
