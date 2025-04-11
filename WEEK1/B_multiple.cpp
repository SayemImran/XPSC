#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int firstMultiple = ((a + c - 1) / c) * c;
    
    if (firstMultiple >=a && firstMultiple <= b) {
        cout << firstMultiple << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}
