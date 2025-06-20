// #include <cstdio>
// typedef long long ll;

// int main()
// {

//     ll t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//         ll a, b, n;
//         scanf("%lld %lld %lld", &a, &b, &n);
//         ll res(b);
//         for (ll p = 0; p < n; p++)
//         {
//             ll x;
//             scanf("%lld", &x);
//             res += (x < (a - 1)) ? x : (a - 1);
//         }

//         printf("%lld\n", res);
//     }
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        ll res = b;
        for(int i=0; i<n; i++){
            ll tools;
            cin>>tools;
            res += (tools < (a - 1)) ? tools : (a - 1);
        }

        cout<<res<<endl;
    }
    return 0;
}