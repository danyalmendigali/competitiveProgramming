#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int t;
    cin >> t;
    while(t--) {
    ll int a, b, k;
    cin >> a >> b >> k;
    if(k % 2 != 0) {
        int g, h;
        g = k / 2 + 1;
        h = k - g;
        cout << a * g - b * h;
        cout << endl;
    }
    else {
        int g, h;
        g = k / 2;
        h = k - g;
        cout << a * g - b * h;
        cout << endl;
      }

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();




   return 0;
}
