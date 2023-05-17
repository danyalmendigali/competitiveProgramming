#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int a, b;
    cin >> a >> b;
    int max_1 = max(a, b);
    int min_1 = min(a, b);
    int h = (max_1 - min_1) / 2;
    cout << min_1 << " " << h << endl;





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}



