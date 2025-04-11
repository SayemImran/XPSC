#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sereja = 0;
    int dima = 0;
    bool player_sereja = true;

    while (!v.empty())
    {
        int nums;
        if (v.front() > v.back())
        {
            nums = v.front();
            v.erase(v.begin());
        }
        else
        {
            nums = v.back();
            v.pop_back();
        }

        if (player_sereja)
            sereja += nums;
        else
            dima += nums;

        player_sereja = !player_sereja;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}

/*
https://vjudge.net/solution/59754207
*/