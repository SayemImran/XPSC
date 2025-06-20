#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n); for(auto &i : heights) cin >> i;

    int q;
    cin >> q;
    while (q--) {
        int luchu;
        cin >> luchu;

      
        auto lower = lower_bound(heights.begin(), heights.end(), luchu);
        if (lower == heights.begin()) {
            cout << "X ";
        } else {
            cout << *(lower - 1) << " ";
        }

    
        auto upper = upper_bound(heights.begin(), heights.end(), luchu);
        if (upper == heights.end()) {
            cout << "X" << endl;
        } else {
            cout << *upper << endl;
        }
    }

    return 0;
}
