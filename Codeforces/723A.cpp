#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int min_1 = min(x1, min(x2, x3));
    int max_1 = max(x1, max(x2, x3));
    int sum = x1 + x2 + x3;
    int avarage = sum - (max_1 + min_1);
    int b, c, f;
    b = max_1 - avarage;
    c = avarage - min_1;
    cout << b + c;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
