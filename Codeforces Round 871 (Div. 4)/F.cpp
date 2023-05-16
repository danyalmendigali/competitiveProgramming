#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int u, v, d[n + 1] = {0};
        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            ++d[u], ++d[v];
        }
        int cnt = 0;
        for(int k : d) {
            if(k == 1)
                ++cnt;
        }
        cout << n - cnt - 1 << " " << cnt/(n - cnt - 1) << "\n";
    }

    return 0;
}

