#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    ll n, s; cin >> n >> s;
    ll g = 0;
    vector<ll> dp(n);
    ll sum2 = 0;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        sum2 += dp[i];
    }
    if(sum2 <= s){
        cout << n << endl;
        return;
    }
    sort(all(dp));
    ll sum = 0;
    ll i = 0;
    while(sum <= s){
        sum += dp[i];
        g++;
        i++;
        if(sum > s){
            cout << g - 1 << endl;
            return;
        }
    }
    cout << g - 1 << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
