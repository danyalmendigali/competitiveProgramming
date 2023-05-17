#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string a, b, c;
    cin >> a >> b >> c;

    string g = a + b;

    sort(g.begin(), g.end());
    sort(c.begin(), c.end());

    cout << (c == g? "YES" : "NO");





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}


