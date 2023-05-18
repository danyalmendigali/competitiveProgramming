#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

const int MAX_INT = 1e9;

void solve() {
    int n, count = 0, x = 1, y = 1;
    cin >> n;
    while(n > 0 && x <= n) {
        count += 1;
        n = n - x;
        y += 1;
        x += y;
    }

    cout << count << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();

    return 0;
}

