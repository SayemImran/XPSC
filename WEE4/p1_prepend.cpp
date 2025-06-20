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
        string str;
        cin>>str;

        int l = 0, r=n-1;

        while(l<=r){
            if(str[l]==str[r]){
                break;
            }
            else{
                n-=2;
                l++;
                r--;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
