#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        
        for(auto &i : v){
            cin>> i;
        }
        int rst = v[0];
        for(int i=1; i<n; i++){
            rst &= v[i];
        }
        cout<<rst<<"\n";
    }
    return 0;
}