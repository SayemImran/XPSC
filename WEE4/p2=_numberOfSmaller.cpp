#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;

    vector<int> va(a);
    vector<int> vb(b);

    for(int i=0 ; i<a; i++){
        cin>>va[i];
    }

    for(int i=0 ; i<b; i++){
        cin>>vb[i];
    }

    int l=0, r=0;
    int current = 0;

    while(r<b){
        if(l<a && va[l]<vb[r]){
            current++;
            l++;
        }
        else{
            r++;
            cout<<current<<" ";
        }
    }
    return 0;
}