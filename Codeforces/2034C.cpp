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


void solve()
{
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	vector<pair<int, int>> pr;
	
	for(int i = 0; i < n; i++){
		if(a[i] == 2){
			for(int j = 0; j < n; j++){
				if(a[j] == 1){
					a[i]--;
					a[j]++;
					pr.push_back({i + 1, j + 1});
					break;
				}
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] == 2){
			for(int j = 0; j < n; j++){
				if(a[j] == 0){
					a[i]--;
					a[j]--;
					pr.push_back({i + 1, j + 1});
					break;
				}
			}
		}
	}
	
	cout << pr.sz << endl;
	for(auto i : pr){
		cout << i.F << " " << i.S << endl;
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