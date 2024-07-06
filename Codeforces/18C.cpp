#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> pref(n);
    pref[0] = a[0];

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    int total_sum = pref[n - 1];
    int res = 0;

    for (int i = 0; i < n - 1; i++) {
        if (pref[i] * 2 == total_sum) {
            res++;
        }
    }

    cout << res << endl;
}

signed main() {
    Fast_Code;
    solve();
    return 0;
}
