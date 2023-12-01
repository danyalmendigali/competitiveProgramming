#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false)

using namespace std;


const ll inf = 1e9 + 9;
const ll INF = 1e15 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> dp[i];
    }
    int mx = 1;
    for (int i = 0; i < n; ++i) {
        int f = 1;
        int res = dp[i];
        for (int j = i + 1; j < n && dp[j] <= res; ++j) {
            res = dp[j];
            f++;
        }
        res = dp[i];
        for (int j = i - 1; j >= 0 && dp[j] <= res; --j) {
            res = dp[j];
            f++;
        }
        mx = max(mx, f);
    }
    cout << mx << endl;

}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
