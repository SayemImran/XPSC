#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int col;
        cin>>col;
        string st1,st2;
        cin>>st1>>st2;
        bool isSame = true;
        for(int i=0; i<col; i++){
            if(st1[i] != st2[i] && (st1[i] == 'R' || st2[i] == 'R')){
                isSame =false;
                break;
            }
        }

        if(!isSame)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}