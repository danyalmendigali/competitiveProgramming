#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        if (a % 10 != 0) {
            a--;
        }
       else {
        a /= 10;
       }
    }

    cout << a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();

    return 0;
}
