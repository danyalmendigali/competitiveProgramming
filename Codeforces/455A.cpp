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

const int N = 1e5 + 5;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<ll> f(N, 0);
       for(int i = 0; i < n; i++){
              f[a[i]]++;
       }
       vector<ll> dp(N, 0);
       dp[1] = f[1];
       for(int i = 2; i < N; i++){
              dp[i] = max(dp[i - 1], dp[i - 2] + f[i] * 1LL * i);
       }

       cout << dp[100004];







}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
