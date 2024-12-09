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

const ll N = 1e5 + 5;

void solve()
{
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	bool ok = false;
	int ind = -1;
	
	for(int i = 0; i < n; i++){
		bool fl = true;
		for(int j = 0; j < n; j++){
			if(i != j && abs(a[i] - a[j]) % k == 0){
				fl = false;
				break;
			}
		}
		
		if(fl){
			ok = true;
			ind = i + 1;
			break;
		}
	}
	
	
	if(ok){
		cout << "YES" << endl;
		cout << ind << endl;
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