#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int t;
    cin >> t;
    while(t--) {
    int ll r, b, d;
    cin >> r >> b >> d;
    ll int minCount = min(r, b);
    ll int maxCount = max(r, b);
    ll int maxDiff = ceil(maxCount / (double) minCount) - 1;

    if(maxDiff <= d) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
       }
    }


 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();





   return 0;
}
