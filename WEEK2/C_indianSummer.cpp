#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> svc;
    while (n--)
    {
        string str;
        getline(cin, str);
        svc.insert(str);        
    }
    cout << svc.size() << endl;
    return 0;
}

/*

https://vjudge.net/solution/59758226

*/