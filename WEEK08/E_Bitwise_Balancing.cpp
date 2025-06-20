#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll k_bit_on_or_off(ll n, int k){
    return ((n >> k) & 1);
}

ll k_bit_turn_on(ll n, int k){
    return (n | (1LL<<k));
}
ll k_bit_turn_off(ll n, int k){
    return (n & (~(1LL<<k)));
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a=0,b,c,d;
        cin >> b >> c>> d;
        a = b;

        int msb = max({__lg(b), __lg(c), __lg(d)});

        for(int k=0; k<=msb; k++){
            if(!k_bit_on_or_off(b,k) && k_bit_on_or_off(d,k)){
                a = k_bit_turn_on(a,k);
            }
            if(k_bit_on_or_off(c,k) && k_bit_on_or_off(d,k)){
                a = k_bit_turn_off(a,k);
            }
        }

        if((a|b) - (a&c) == d){
            cout<<a<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}