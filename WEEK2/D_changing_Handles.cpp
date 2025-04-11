#include <bits/stdc++.h>
#define loop(i, sz) for (int i = 0; i < sz; i++)
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> ans, has;
    loop(i, n)
    {
        string old, nw;
        cin >> old >> nw;

        if (has.find(old) != has.end())
        {
            string oldd = has[old];
            ans[oldd] = nw;
            has.erase(old);
            has[nw] = oldd;
        }
        else
        {

            ans[old] = nw;
            has[nw] = old;
        }
    }
    cout<<ans.size()<<endl;
    for (auto [a, b] : ans)
        cout << a << " " << b << endl;
    return 0;
}

/*
 https://vjudge.net/solution/59796604
https://vjudge.net/solution/59801720
7/4/2025
*/