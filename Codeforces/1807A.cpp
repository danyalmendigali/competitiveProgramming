#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
       int a, b, c;
       cin >> a >> b >> c;
       if(a + b == c) {
           cout << '+' << endl;
       }
       if(a - b == c) {
           cout << '-' << endl;
       }
       
   }
 
    return 0;
}
