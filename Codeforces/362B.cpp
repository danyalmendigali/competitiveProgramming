#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;


void solve()
{
    ll n, m;
    cin >> n >> m;

    if(m == 0){
        cout << "YES" << endl;
        return;
    }

    vector<ll> dp(m);
    for (ll i = 0; i < m; ++i) {
        cin >> dp[i];
    }
    sort(all(dp));
    if(dp[0] == 1 || dp[m - 1] == n){
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0; i < m; i++){
            if(dp[i + 2] - dp[i + 1] == 1 && dp[i + 1] - dp[i] == 1){
                cout << "NO" << endl;
                return;
            }
    }
    cout << "YES" << endl;





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
