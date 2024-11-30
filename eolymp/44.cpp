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

const ll N = (1e3 * 5) + 1;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

vector<int> dp(N, inf);

void solve()
{
	int n; cin >> n;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j < i; j++){
			dp[i] = min(dp[i], dp[j] + dp[i - j]);
			if(i % j == 0){
				dp[i] = min(dp[i], dp[j] +  dp[i / j]);
			}
		}
	}
	
	cout << dp[n] << endl;
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
1