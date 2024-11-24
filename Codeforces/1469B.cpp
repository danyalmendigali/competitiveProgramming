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
const ll inf = 1e9 + 9;


void solve()
{
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int m; cin >> m;
	vector<int> b(m);
	for(int i = 0; i < m; i++) cin >> b[i];
	
	int mx = 0, sum = 0;
	for(int i = 0; i < b.sz; i++){
		sum += b[i];
		mx = max(mx, sum);
	}
	
	int mx2 = 0, sum2 = 0;
	for(int i = 0; i < a.sz; i++){
		sum2 += a[i];
		mx2 = max(mx2, sum2);
	}
	
	cout << mx + mx2 << endl;
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
