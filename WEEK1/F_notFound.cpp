#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cin.ignore();

    int freq[26] = {0};
    set<char> sv(s.begin(), s.end());
    for (auto it : sv)
    {
        freq[it - 'a']++;
    }
    char missing = '\0';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            missing = 'a' + i;
            break;
        }
    }

    if (missing != '\0')
    {
        cout << missing << endl;
    }
    else
    {
        cout << "None" << endl;
    }
    return 0;
}