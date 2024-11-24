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
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n - 2; i++){
		if(a[i] < 0) break;
		a[i + 1] -= 2 * a[i];
		a[i + 2] -= a[i];
		a[i] -= a[i];
	}
	
	
	int cnt = 0;
	for(auto i : a){
		if(i == 0) cnt++;
	}
	
	if(cnt == n) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
