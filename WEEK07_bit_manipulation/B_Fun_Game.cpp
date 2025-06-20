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
        cin.ignore();
        string s1, s2;
        cin>> s1 >> s2;

        if(s1 == s2){
            cout<<"YES\n";
            continue;
        }
        int ones_pos = -1;
        for(int i=0; i<n;i++){
            if(s1[i] == '1'){
                ones_pos = i;
                break;
            }
        }

        if(ones_pos != -1){
            bool okay = true;
            for(int i=0; i<n; i++){
                if(s1[i] != s2[i]){
                    if(ones_pos > i ){
                        okay = false;
                        break;
                    }
                }
            }

            if(okay){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}