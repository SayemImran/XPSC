#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    unordered_map<int, int> freq;
    cin >> n;
    
    while(n--) {
        cin >> a;
        freq[a]++;
    }

    int maxFreq = 0;
    for (auto &p : freq) {
        maxFreq = max(maxFreq, p.second);
    }

    cout << maxFreq << "\n";
    return 0;
}
        