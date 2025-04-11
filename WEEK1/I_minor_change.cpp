#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin.ignore();
    cin>>s2;
    cin.ignore();

    int sz = s1.size();
    int counter = 0;
    for(int i=0; i<sz; i++){
        if(s1[i] != s2[i]){
            s1[i] = s2[i];
            counter++;
        }
    }

    cout<<counter<<endl;
    return 0;
}