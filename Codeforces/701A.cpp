#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> dp;
    for (int i = 1; i <= n; ++i) {
        int value;
        cin >> value;
        dp.push_back({value, i});
    }
    sort(all(dp));

    for (int i = 0; i < n / 2; ++i) {
        cout << dp[i].S << " " << dp[n - i - 1].S << endl;
    }



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}
