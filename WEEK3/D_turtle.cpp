#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string str;
        cin>>str;
        str = str.substr(0,n);

        if(str[0] != str[n-1])
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}