#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,k; cin>>n >>k;

    vector<ll> v(n); for(auto &i : v) cin >> i;

    for(int i=0;i<k; i++){
        int key;
        cin>>key;
        int l=0, r = n-1, mid;
        int ans = -1;
        while(l<=r){
            mid= (l+r)/2;

            if(key>=v[mid]){
                ans=mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        cout<<ans+1<<"\n";
    }
    return 0;
}