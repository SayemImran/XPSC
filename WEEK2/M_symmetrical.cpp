#include <bits/stdc++.h>
using namespace std;

string decode_string(const string& b) {
    
    set<char> unique_chars(b.begin(), b.end());
    string r(unique_chars.begin(), unique_chars.end());
    
    // Step 2: Build the decoding map (reverse of encoding)
    // Encoding: r[i] -> r[len-1-i]
    // Decoding: r[len-1-i] -> r[i]
    map<char, char> decode_map;
    int len = r.size();
    for (int i = 0; i < len; i++) {
        decode_map[r[len - 1 - i]] = r[i];
    }
    
    // Step 3: Transform b to s by applying the decoding map
    string s = b;
    for (char& c : s) {
        c = decode_map[c];
    }
    
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;
        cout << decode_string(b) << '\n';
    }
    
    return 0;
}