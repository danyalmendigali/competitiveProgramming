#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
   int t;
   cin >> t;
   while(t--) {
     int n, a = 0, b = 0;
     cin >> n;
     int arr[n];
     for(int i = 0; i < n; i++) {
        cin >> arr[i];
     }
     for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            a++;
        }
        if(arr[i] % 2 != 0) {
            b++;
        }
     }

     cout << ((b == 0 || a == 0 && b % 2 == 0)? "NO" : "YES") << endl;


   }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}

