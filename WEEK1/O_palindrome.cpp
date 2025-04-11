#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int sz,steps;
        cin>>sz>>steps;
        string s;
        cin>>s;

        map<char, int> mp;

        for(int i=0; i<sz; i++){
            mp[s[i]]++;
        }
        
        int odd_c = 0;
        for(auto itm : mp){
            if(itm.second % 2 !=0){
                odd_c++;
            }
        }

        if(steps>=sz)
            cout<<"NO"<<endl;
        else if(steps>=odd_c-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}