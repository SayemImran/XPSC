#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;
    
    int count = t / a; 
    int total_biscuits = count * b; 

    cout << total_biscuits << endl; 
    return 0;
}
