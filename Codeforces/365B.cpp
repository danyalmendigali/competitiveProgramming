#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    ll n; cin >> n;
    vector<ll> res;
    vector<ll> dp;
    dp.pb(0);
    dp.pb(1);
    ll val;
    for(int i = 0; i < n; i++){
        cin >> val;
        dp.pb(val);
    }
    dp.pb(0); dp.pb(0);
    int mx = 0;
    for(int i = 0; i < n + 5; i++){
        if(dp[i] == dp[i - 1] + dp[i - 2]){
            mx++;
        }
        else{
            res.pb(mx);
            mx = 0;
        }
    }
    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
