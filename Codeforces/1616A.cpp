#include <bits/stdc++.h>

typedef long long  ll;
using namespace std;

#define ar array
#define FOR(i, a, b) for(int (i) = (a); (i) < (b); (i)++)


void solve() {
    int n;
    cin >> n;
    vector <int> myVector (101, 0);

    FOR(i, 0, n) {
       int x;
       cin >> x;

       if(x < 0) {
         ++myVector[-x];
       }
       else {
         ++myVector[x];
       }
    }

     int ans = 0;

     if(myVector[0] > 0) {
        ++ans;
     }

     FOR(i, 1, 101) {
        int myVector1 = myVector[i];
        ans += min(2, myVector1);
     }



      cout << ans;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin >> t;


    FOR(i, 0, t) {
      solve();
      cout << "\n";
    }





   return 0;
}
