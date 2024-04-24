#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll unsigned long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<ll> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int m; cin >> m;
    vector<ll> sorted_dp = dp;
    sort(sorted_dp.begin(), sorted_dp.end());
    ll sum = 0;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 2){
            sum = 0;
            for(int j = b - 1; j < c; j++){
                sum += sorted_dp[j];
            }
            cout << sum << endl;
        }
        if(a == 1){
            sum = 0;
            for(int j = b - 1; j < c; j++){
                sum += dp[j];
            }
            cout << sum << endl;
        }
    }
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
