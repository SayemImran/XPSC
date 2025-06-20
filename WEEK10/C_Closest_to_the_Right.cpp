#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin >> n >>k;
    vector<ll> v(n); for(auto &i : v) cin >> i;

    for(int i=0; i<k; i++){
        ll trgt;
        cin>>trgt;

        int l = 0, r = n-1, mid;

        ll ans=n;
        while(l<=r){
            mid = (l+r)/2;

            if(trgt <= v[mid]){
                ans = mid;
                r=mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}