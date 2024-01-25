#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

set<int> st;

void solve()
{
    st.clear();
    int n; cin >> n;
    vector<ll> res, dp;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        dp.pb(x);
        res.pb(x);
    }

    for(ll i = 1; i < 1000000000; i *= 2){
        dp.pb(i);
    }
    sort(all(dp));

    ll r = 1;
    for(int i = dp.sz - 1; i > 0; i--){
        if(dp[i] == dp[i - 1]){
            ll a = 0;
            for(int j = 0; j < res.sz; j++){
                if(res[j] % dp[i] == 0){
                    a++;
                }
            }
            cout << dp[i] << " " << a << endl;
            return;
        }
        r = max(r, dp[i]);
    }
    cout << r << " " << res.sz << endl;
}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
