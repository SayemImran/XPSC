#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> steps(n);
        for (auto &i : steps)
            cin >> i;

        vector<ll> prefixOfSteps(n);
        prefixOfSteps[0] = steps[0];
        for (int i = 1; i < n; i++)
            prefixOfSteps[i] = prefixOfSteps[i - 1] + steps[i];

        vector<ll> prefixsum_maxStep_in_ith_step(n);

        prefixsum_maxStep_in_ith_step[0] = steps[0];
        for (int i = 1; i < n; i++)
            prefixsum_maxStep_in_ith_step[i] = max(prefixsum_maxStep_in_ith_step[i - 1], steps[i]);

        while (q--)
        {
            ll k;
            cin >> k;
            auto it = upper_bound(prefixsum_maxStep_in_ith_step.begin(), prefixsum_maxStep_in_ith_step.end(), k) - prefixsum_maxStep_in_ith_step.begin();
            if (it == 0)
                cout << 0 << " ";
            else
                cout << prefixOfSteps[it - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}
