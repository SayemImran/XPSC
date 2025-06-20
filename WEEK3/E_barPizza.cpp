#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<int> arrival_order;
    priority_queue<pair<int, int>> polycarp_pq;
    vector<bool> served(q + 2, false);

    int c_id = 1;

    for (int i = 0; i < q; ++i)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int m;
            cin >> m;
            arrival_order.push(c_id);
            polycarp_pq.push({m, -c_id});
            c_id++;
        }
        else if (type == 2)
        {

            while (served[arrival_order.front()])
            {
                arrival_order.pop();
            }
            int id = arrival_order.front();
            arrival_order.pop();
            served[id] = true;
            cout << id << endl;
        }
        else if (type == 3)
        {

            while (served[-polycarp_pq.top().second])
            {
                polycarp_pq.pop();
            }
            int id = -polycarp_pq.top().second;
            polycarp_pq.pop();
            served[id] = true;
            cout << id << endl;
        }
    }

    return 0;
}
