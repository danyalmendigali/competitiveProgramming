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
#define pb2(a, b) push_back({a, b})
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll N = 1e3 + 1;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

void solve()
{
	uint64_t  s, n, b; cin >> s >> n >> b;
	vector<uint64_t > dp(n);
	dp[0] = s;
	dp[1] = s;
	for(uint64_t i = 2; i < n; i++){
		dp[i] = (dp[i - 1] + dp[i - 2]) + 1;
	}
	
	uint64_t res = b - dp[n - 1];
	
	cout << res << endl;

	
	 

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
