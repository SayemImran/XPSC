#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,K;
        cin>> n >> K;

        vector<int> a(n);
        int maxSetBit = 0;

        for(int i=0; i<n; i++){
            cin>> a[i];
            maxSetBit = max(maxSetBit, __lg(a[i]));
        }

        
    }
    return 0;
}