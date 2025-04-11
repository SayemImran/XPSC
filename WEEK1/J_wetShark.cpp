#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    long long int sum = 0, min_odd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];

        if (nums[i] % 2 == 1)
        {
            min_odd = min(min_odd, (long long)nums[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }

    else
    {
        cout << sum - min_odd << endl;
    }

    return 0;
}
