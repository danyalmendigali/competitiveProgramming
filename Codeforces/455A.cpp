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

const ll N = 1e5 + 1;

ll cnt[N] , a[N] , dp[N];

void solve()
{
	ll n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++;
	}
	
	dp[1] = cnt[1];
	
	for(int i = 2; i < N; i++){
		dp[i] = max(dp[i - 1], dp[i - 2] + (i * cnt[i]));
	}
	
	cout << dp[N - 1] << endl;
	

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
