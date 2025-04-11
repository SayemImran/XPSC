#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> database;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (database.find(name) == database.end())
        {

            database[name] = 0;
            cout << "OK" << endl;
        }
        else
        {

            int count = ++database[name];
            string new_name = name + to_string(count);

            while (database.find(new_name) != database.end())
            {
                count = ++database[name];
                new_name = name + to_string(count);
            }

            database[new_name] = 0;
            cout << new_name << endl;
        }
    }

    return 0;
}
