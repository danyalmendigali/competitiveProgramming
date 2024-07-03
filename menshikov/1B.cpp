#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const int MAXN = 3 * 1e5;


void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, string> dp;
    dp[a[0]] = to_string(a[0]);

    for (int i = 1; i < n; i++) {
        unordered_map<int, string> next_dp;
        for (const auto& entry : dp) {
            int curr_sum = entry.first;
            string expression = entry.second;

            next_dp[curr_sum + a[i]] = expression + "+" + to_string(a[i]);
            next_dp[curr_sum - a[i]] = expression + "-" + to_string(a[i]);
        }
        dp = next_dp;
    }

    if (dp.find(s) != dp.end()) {
        cout << dp[s] << "=" << s << endl;
    } else {
        cout << "No solution" << endl;
    }
}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
