#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int a;
    cin >> a;

    while (true) {
        int sum = 0;
        int n = a;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 4 == 0) {
            cout << a << endl;
            break;
        }
        a++;
    }

 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();





   return 0;
}
