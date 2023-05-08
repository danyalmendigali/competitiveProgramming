#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    cin >> n;
    int array[n];
    int mihai = 0, bianca = 0;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
        if(array[i] % 2 == 0) {
            mihai += array[i];
        }
        else {
          bianca += array[i];
        }
    }


     if(mihai > bianca) {
        cout << "YES\n";
     }
     else
        cout << "NO\n";
}


int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);

     int t;
     cin >> t;
     while(t--)
        solve();







   return 0;
}
