#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> v(n);
    loop(i, n)
    {
        cin >> v[i];
    }

    vector<ll> unq_count(n);
    set<ll> st;

    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(v[i]);
        unq_count[i] = st.size();
    }

    while (m--)
    {
        int li;
        cin >> li;
        cout << unq_count[li - 1] << endl;
    }

    return 0;
}
