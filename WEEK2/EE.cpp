#include <bits/stdc++.h>
#define loop(i, sz) for (int i = 0; i < sz; i++)
#define loop_j(j, sz) for (int j = 0; j < sz; j++) 
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        
        vector<vector<int>> v(n, vector<int>(n - 1));
        vector<int> freq(n + 1, 0);

        
        loop(i, n) {
            loop_j(j, n - 1) {
                cin >> v[i][j];
                if (j == 0)
                    freq[v[i][j]]++;
            }
        }

       
        int f_elemt = -1;
        loop(i, n + 1) { 
            if (freq[i] == n - 1) {
                cout << i << " ";
                f_elemt = i;
                break;
            }
        }

        
        loop(i, n) {
            if (v[i][0] != f_elemt) {
                loop_j(j, n - 1) {
                    cout << v[i][j] << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
/*
    https://vjudge.net/solution/59796604

    7/4/2025
*/