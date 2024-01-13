#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;

void solve()
{
    mp.clear();
    ll n, m;
    cin >> n >> m;
    vector<ll> res;
    vector<vector<ll>> dp(m, vector<ll>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> dp[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        ll k = 0;
        ll mx = 0, ind;
        for(int j = 0; j < m; j++){
            if(mx < dp[j][i]){
                mx = dp[j][i];
                ind = j;
            }
        }
        res.pb(ind + 1);
    }

    ll s = 0;
    for(int i = 0; i < res.sz; i++){
        mp[res[i]]++;
        s++;
    }
    vector<pair<ll, ll>> p;
    ll r = 0;
    for(auto i : mp){
        cout << i.F << " " << i.S << endl;
        p.emplace_back(i.F, i.S);
        r++;
    }
    ll mx = 0;
    for(ll i = 0; i < r; i++){
        mx = max(mx, p[i].S);
    }
    cout << mx << endl;
    vector<ll> t;
    for(ll i = 0; i < r; i++){
        if(p[i].S == mx){
            t.pb(i + 1);
        }
    }
    sort(all(t));
    cout << t[0] << endl;

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
