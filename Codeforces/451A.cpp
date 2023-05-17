#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n, m;
    cin >> n >> m;
    cout << (min(n, m) % 2 == 0? "Malvika" : "Akshat");

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

