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
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> dp;
    dp.pb(n);
    for(int i = 1; i < n; i++){
        dp.pb(i);
    }
    for(int i = 0; i < dp.sz; i++){
        cout << dp[i] << " ";
    }
    cout << endl;


}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
