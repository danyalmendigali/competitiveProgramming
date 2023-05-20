#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    ll int  d1, d2, d3, b1, b2, b3, b4;

    cin >> d1 >> d2 >> d3;
    b1 = d1 + d2 + d3;
    b2 = d1 * 2 + d3 * 2;
    b3 = d2 * 2 + d3 * 2;
    b4 = d1 * 2 + d2 * 2;

    cout << min(b1, min(b2, min(b3, b4)));


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}


