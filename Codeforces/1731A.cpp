#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>

#define ll long long
#define sz size();
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll N = 101;
const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;

void solve()
{
    ll a, res = 1; cin >> a;
    vector<ll> dp(a);
    for(ll i = 0; i < a; i++){
        cin >> dp[i];
        res *= dp[i];
    }
    ll ans = (a - 1) + res;
    cout << ans * 2022 << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
