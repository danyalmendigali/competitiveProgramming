#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve() {
    int n; cin >> n;
    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> dp[i];
    }
    sort(all(dp));
    if(dp[0] >= 0) {
        cout << dp[n - 1] << endl;
        return;
    }
    cout << dp[0] << endl;
}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}
