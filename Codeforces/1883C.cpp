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
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int res, res2 = 0, mn = inf;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % k == 0){
			mn = 0;
		}
		res = a[i] / k;
		res2 = (res + 1) * k;
		mn = min(mn, (res2 - a[i]));
	}
	
	cout << mn << endl;
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
