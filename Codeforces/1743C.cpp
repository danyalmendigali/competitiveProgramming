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

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	s = "0" + s + "0";
	vector<ll> a(n + 2, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	ll ans = 0, cur = 0, pos = 0;
	vector<int> b;
	
	for(int i = 0; i < n + 2; i++){
		if(s[i] == '0'){
			b.pb(cur);
			cur = 0;
			pos = i;
		}
		else{
			cur = max(cur, a[pos] - a[i]);
		}
	}
	
	for(int i = 0; i < n + 2; i++){
		if(s[i] == '1'){
			ans += a[i];
		}
	}
	
	for(int i = 0; i < b.sz; i++){
		ans += b[i];
	}
	
	cout << ans << endl;
	
}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
