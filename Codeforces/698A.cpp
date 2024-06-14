#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie()

const int MAXN = 1e5 + 5;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       vector<vector<int>> dp(n, vector<int>(3, n));

       dp[0][0] = 1;
       if(a[0] == 3 || a[0] == 1) dp[0][1] = 0;
       if(a[0] == 2 || a[0] == 3) dp[0][2] = 0;

       for(int i = 1; i < n; i++){
              dp[i][0] = min({dp[i - 1][2], dp[i - 1][1], dp[i - 1][0]}) + 1;

              if(a[i] == 3 || a[i] == 1){
                     dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
              }

              if(a[i] == 2 || a[i] == 3){
                     dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]);
              }
       }

       cout << min({dp[n - 1][2], dp[n - 1][1], dp[n - 1][0]}) << endl;


}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
