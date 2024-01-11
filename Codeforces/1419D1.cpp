#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
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
    ll n, a = 0;
    cin >> n;
    vector<ll> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());
    for(int i = 0; i < dp.sz - 1; i += 2){
        swap(dp[i], dp[i + 1]);
    }
    cout << (n - 1) / 2 << endl;
    for(ll i = 0; i < dp.sz; i++){
        cout << dp[i] << " ";
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
