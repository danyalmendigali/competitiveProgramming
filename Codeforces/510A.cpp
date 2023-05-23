#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
        int n, m;
        cin >> n >> m;

        for(int i = 1; i <= n; i++) {
            if(i % 4 == 2) {
            for(int i = 1; i < m; i++) {
                cout << ".";
            }
            cout << "#";
        }
        else if(i % 4 == 0) {
            cout << "#";
            for(int i = 1; i < m; i++) {
                cout << ".";
            }
        }
        else {
            for(int i = 0; i < m; i++) {
                cout << "#";
            }
        }
        cout << "\n";
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();





   return 0;
}
