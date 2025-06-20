#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c; 
        
       
        for (int i = 0; i < 5; i++) {
           
            ll incrs_a = (a + 1) * b * c - a * b * c; 
            ll incrs_b = a * (b + 1) * c - a * b * c; 
            ll incrs_c = a * b * (c + 1) - a * b * c; 
            
            if (incrs_a >= incrs_b && incrs_a >= incrs_c) {
                a++;
            } else if (incrs_b >= incrs_a && incrs_b >= incrs_c) {
                b++;
            } else {
                c++;
            }
        }
        
        
        ll product = a * b * c;
        cout << product << endl;
    }
    
    return 0;
}