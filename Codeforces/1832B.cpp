#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(all(dp));

    for(int i = 0; i < k; i++){
        int g1 = dp[i];
        int g2 = dp[i + 1];
        int other = dp[dp.sz - 1];
        if(g1 + g2 < other){
            dp.erase(dp.begin());
            dp.erase(dp.begin());
        }
        else{
            dp.erase(dp.begin() + dp.sz - 1);
        }
    }
    for(int i = 0; i < dp.sz; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    ll sum = 0;
    for(auto i : dp){
        sum += i;
    }
    cout << sum << endl;




}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
