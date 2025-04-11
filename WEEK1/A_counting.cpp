#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int counter = 0;
    for(int i=a; i<=b; i++){
        if(i>=a && i<=b){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}