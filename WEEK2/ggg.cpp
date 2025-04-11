#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        cin.ignore();
        string s1, s2;
        cin >> s1;
        cin.ignore();
        cin >> s2;
        int even_A_one = 0;
        int odd_A_one = 0;
        int even_B_zero = 0;
        int odd_B_zero = 0;
        int allzero = 0;
        map<int, char> mp, mp2;
        
        for (int i = 0; i < n; i++)
        {
            mp[i + 1] = s1[i];
            mp2[i + 1] = s2[i];
        }
        
        for (auto it : mp)
        {
            if (it.first % 2 == 0 and it.second == '1')
            {
                even_A_one++;
            }
            if (it.first % 2 != 0 and it.second == '1')
            {
                odd_A_one++;
            }
            if (it.second == '0')
            {
                allzero++;
            }
        }
        for (auto it : mp2)
        {
            if (it.first % 2 == 0 and it.second == '0')
            {
                even_B_zero++;
            }
            if (it.first % 2 != 0 and it.second == '0')
            {
                odd_B_zero++;
            }
        }
        
        if (allzero == n)
        {
            cout << "YES" << endl;
        }
        else if (odd_B_zero >= even_A_one && even_B_zero >= odd_A_one)
        {
            
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
/*
https://vjudge.net/solution/59818621
*/