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

vector<ll> sum[N];

void solve()
{
	
	int n, k; cin >> n >> k;
	vector<int> a(n), x(n);
	vector<ll> res(n + 1);
	res[0] = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		cin >> x[i];
		res[abs(x[i])] += a[i];
	}
	
	ll ans = 0;
	bool ok = true;
	for(int i = 1; i <= n; i++){
		int mn = min(res[i], ans);
		res[i] -= mn;
		ans -= mn;
		if(res[i] > k){
			ok = false;
		}	
		else{
			ans += k - res[i];
		}
	}
	
	if(ok){
		cout << "YES" << endl;
		return;
	}
	else{
		cout << "NO" << endl;
		return;
	}
	
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
