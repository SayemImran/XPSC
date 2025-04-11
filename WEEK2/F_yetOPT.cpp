#include <bits/stdc++.h>
using namespace std;

string keteFelo(string& s) {
    map<int, char> mp;          
    stack<int> lower, upper;    
    int n = s.size();
    
   
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b') {
            if (!lower.empty()) {
                int ind = lower.top();
                mp[ind] = '*'; 
                lower.pop();
            }
        } else if (s[i] == 'B') {
            if (!upper.empty()) {
                int ind = upper.top();
                mp[ind] = '*'; 
                upper.pop();
            }
        } else {
            mp[i] = s[i];
            if (isupper(s[i])) {
                upper.push(i);
            } else {
                lower.push(i);
            }
        }
    }
    
    string result;
    for (int i = 0; i < n; i++) {
        if (mp.find(i) != mp.end() && mp[i] != '*') {
            result += mp[i];
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << keteFelo(s) << '\n';
    }
    return 0;
}