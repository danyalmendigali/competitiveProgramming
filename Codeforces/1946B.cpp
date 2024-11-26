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

const ll N = 1e5 + 1;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

void solve()
{
	int n, k; cin >> n >> k;
	vector<ll> a(n);
	int cnt = 0;
	ll sum2 = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] < 0){
			cnt++;
			sum2 += a[i];
		}
	}
	
	ll ans = a[0], sum = 0;
	for(int r = 0; r < n; r++){
		sum += a[r];
		ans = max(ans, sum);
		sum = max(sum, 0 * 1ll);
	}
	ans = max(0 * 1ll, ans);
	if(cnt == n){
		cout << mod + sum2 << endl;
		return;
	}
	for(int i = 0; i < k; i++){
		ans = (ans + ans);
	}
	
	cout << ans % mod << endl;
	
	
	

	
	 

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
