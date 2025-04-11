#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> final_cipher(n);
        for (int i = 0; i < n; i++)
        {
            cin >> final_cipher[i];
        }

        vector<int> initial_cipher(n);

        for (int i = 0; i < n; i++)
        {
            int b;
            string moves;
            cin >> b >> moves;

            int digit = final_cipher[i];

            for (char move : moves)
            {
                if (move == 'U')
                {
                    digit = (digit - 1 + 10) % 10;
                }
                else if (move == 'D')
                {
                    digit = (digit + 1) % 10;
                }
            }

            initial_cipher[i] = digit;
        }

        for (int i = 0; i < n; i++)
        {
            cout << initial_cipher[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
