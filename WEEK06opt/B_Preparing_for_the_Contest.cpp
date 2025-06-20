#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        for (ll i = 1; i <= k; i++)
        {
            cout<<i<<" ";
        }
        for (ll i = n; i > k; i--)
        {
            cout<<i<<" ";
        }
        puts("");
    }
}


