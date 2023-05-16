#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX;
        ll a;
        string b;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            if(b == "11")
                ans1 = min(ans1, a);

            else if(b == "01")
                ans2 = min(ans2, a);

            else if(b == "10")
                ans3 = min(ans3, a);
        }
        if(ans1 == INT_MAX&& (ans2 == INT_MAX || ans3 == INT_MAX)) {
            cout << -1 << "\n";
            continue;
        }
        if(ans1 < (ans2 + ans3)) {
            cout << ans1;
        }
        else {
            cout << ans2 + ans3;
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
