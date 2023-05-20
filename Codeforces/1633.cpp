#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
       int t;
       cin >> t;
       while(t--) {
        ll int n;
        cin >> n;
        if(n % 7 == 0) {
            cout << n << endl;
        }

        else {
            ll int k = n % 7;
            ll int x = 7 - k;
        if(n % 10 >= 7) {
            cout << n - k << endl;
        }
        else if(n % 10 <= 3) {
            cout << n + x << endl;
        }
        else {
            ll int z = n % 10;
            if(z >= k) {
                cout << n - k << endl;
            }
            else {
                cout << n + x << endl;
            }
        }
     }
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}



