#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sz = s.size();

        // Use a vector to store characters and their "keep" status
        vector<char> stack;
        
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'B') {
                // Pop the last uppercase letter
                for (int j = stack.size() - 1; j >= 0; j--) {
                    if (isupper(stack[j])) {
                        stack.pop_back();
                        break;
                    }
                }
            }
            else if (s[i] == 'b') {
                // Pop the last lowercase letter
                for (int j = stack.size() - 1; j >= 0; j--) {
                    if (islower(stack[j])) {
                        stack.pop_back();
                        break;
                    }
                }
            }
            else {
                stack.push_back(s[i]);
            }
        }

        // The stack contains the final result
        string result(stack.begin(), stack.end());
        cout << result << endl;
    }
    return 0;
}