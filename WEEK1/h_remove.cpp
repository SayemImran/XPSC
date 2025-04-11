#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    v.erase(remove(v.begin(), v.end(), t), v.end());
    if(v.empty()){
        cout<<endl;
    }
    else{
        for(auto it : v){
            cout<<it<<" ";
        }
    }
    return 0;
}