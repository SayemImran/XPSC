#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    
    set<ll> st;

    for(int i=1; i<=sqrt(n) ; i++){
        if(n % i == 0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    if(k>st.size()){
        cout<<-1<<'\n';
    }
    else{
        auto it = next(st.begin(),k-1);
        cout<<*it<<'\n';
    }
    return 0;
}