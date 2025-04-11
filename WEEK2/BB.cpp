#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        cin.ignore();

        s=s.substr(0,s.size()-2);
        s=s+"i";
        cout<<s<<endl;
    }
    return 0;
}

/*
    https://vjudge.net/solution/59773199
*/