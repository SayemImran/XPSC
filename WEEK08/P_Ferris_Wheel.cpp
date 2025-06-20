#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> child(n);
    for (auto &i : child)
    {
        cin >> i;
    }

    sort(child.begin(), child.end());

    int i = 0, j = n - 1;
    int count = 0;

    while (i <= j)
    {
        if (child[i] + child[j] <= x)
        {
            i++;
        }
        j--;
        count++;
    }

    cout << count << "\n";
    return 0;
}
