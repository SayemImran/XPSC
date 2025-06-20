#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> desired(n);
    vector<int> apartments(m);

    for (int i = 0; i < n; ++i)
        cin >> desired[i];
    for (int i = 0; i < m; ++i)
        cin >> apartments[i];

    sort(desired.begin(), desired.end());
    sort(apartments.begin(), apartments.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m)
    {
        if (abs(desired[i] - apartments[j]) <= k)
        {

            count++;
            i++;
            j++;
        }
        else if (apartments[j] < desired[i] - k)
        {

            j++;
        }
        else
        {

            i++;
        }
    }

    cout << count << endl;
    return 0;
}
