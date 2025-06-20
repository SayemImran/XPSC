#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a){
        cin >> i;
    }

    map<ll, ll> freq;
    ll i = 0, j = 0, curr = 0, ans = 0;
    while (i < n)
    {
        if (freq.find(a[i]) == freq.end() || freq[a[i]] == 0)
        {
            freq[a[i]]++;
            i++;
            curr++;
            ans = max(curr, ans);
        }
        else
        {
            freq[a[j]]--;
            j++;
            curr--;
        }
        
    }

    cout << ans << "\n";
}