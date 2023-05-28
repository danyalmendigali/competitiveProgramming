#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        string a;

        for (int i = 0; i < b.size() - 1; i += 2) {
            a += b[i];
        }

        a += b[b.size() - 1];
        cout << a << endl;

    }


 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();





   return 0;
}



