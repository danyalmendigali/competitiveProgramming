#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



void solve() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;
    long long evenCount = n / 2;

    if (k <= oddCount) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - oddCount) << endl;
    }






}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}


