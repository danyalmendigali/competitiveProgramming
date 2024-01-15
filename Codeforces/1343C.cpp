#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie();

using namespace std;

vector<int> res1, res2, comp;
vector<bool> was;
set<int> st;

void solve()
{
    ll n;cin >> n;
    vector<ll> dp(n);
    vector<ll> mx;
    for (ll i = 0; i < n; i++){
        cin >> dp[i];
    }
    ll sum = 0, mx_val = dp[0];

    for (ll i = 1; i < n; i++) {
        if ((dp[i] > 0 && dp[i - 1] > 0) || (dp[i] < 0 && dp[i - 1] < 0)){
            mx_val = max(mx_val, dp[i]);
        }
        else{
            sum += mx_val;
            mx_val = dp[i];
        }
    }

    sum += mx_val;

    cout << sum << endl;
}

signed main()
{
    _mendigali_;
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
