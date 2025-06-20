#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int low = 1, high = n * n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        bool left_to_right = (i % 2 == 0);
        for (int j = 0; j < n; j++)
        {
            int col = left_to_right ? j : (n - 1 - j);
            if ((i * n + j) % 2 == 0)
                mat[i][col] = low++;
            else
                mat[i][col] = high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int x : mat[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
