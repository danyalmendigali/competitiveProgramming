#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n, m; cin >> n >> m;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(all(dp));
    reverse(all(dp));
    int sum = 0;
    for(int i = 0; i < m; i++){
        if(dp[i] >= 0) sum += dp[i];
    }
    cout << sum << endl;


}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
