#include<bits/stdc++.h>
#define hi int main()
#define ki_khobor_tomader ios::sync_with_stdio(false);cin.tie(nullptr)
#define tata_bye_bye  return 0
using namespace std;


hi
{
    ki_khobor_tomader;
    int t;
    cin>>t;

    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;

        int n_coins = min(s/n,a);
        int ones_coins = s-(n*n_coins);

        if(ones_coins <= b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   tata_bye_bye;
}