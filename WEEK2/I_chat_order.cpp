#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    unordered_map<string, bool> seen;
    vector<string> chat;

    for (int i = n - 1; i >= 0; i--)
    {
        if (!seen[names[i]])
        {
            chat.push_back(names[i]);
            seen[names[i]] = true;
        }
    }

    for (string &name : chat)
    {
        cout << name << endl;
    }

    return 0;
}
