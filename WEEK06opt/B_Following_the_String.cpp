#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solut()
{
    int n;
    cin >> n;

    vector<ll> codeArray(n);

    for (auto &i : codeArray)
    {
        cin >> i;
    }

    unordered_map<char, int> occurenceMap;
    int start = 97;
    for (int i = 0; i < n; i++)
    {
        if (codeArray[i] == 0)
        {
            cout << char(start);
            occurenceMap[start]++;
            start++;
        }
        else
        {
            for (auto itm : occurenceMap)
            {
                if (itm.second == codeArray[i])
                {
                    cout << char(itm.first);
                    occurenceMap[itm.first]++;
                    break;
                }
            }
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solut();
    }
    return 0;
}