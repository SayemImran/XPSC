#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count_1 = 0;

        vector<int> v(n);
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            if(v[i] == 1) {
                count_1++;
            }
        }

        cout << n - (count_1 / 2) << endl;
    }
    return 0;
}
