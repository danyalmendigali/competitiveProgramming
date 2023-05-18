#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

int solve() {
    int t;
    cin >> t;
    while(t--) {
        map <int, int> m;
        int x, ans = -1, n;
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> x;
            m[x]++;
        }

        for(auto it : m) {
            if(it.second >= 3) {
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();



   return 0;
}

