#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int solve(ll int& a, ll int& b, ll int& c) {
        long mx = (a > b) ? a : b; mx = (mx > c) ? mx : c;
        bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);
        long u = (a == mx) ? tie : (mx + 1 - a);
        long v = (b == mx) ? tie : (mx + 1 - b);
        long w = (c == mx) ? tie : (mx + 1 - c);
        cout << u << " " << v << " " << w << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }

    return 0;
}
