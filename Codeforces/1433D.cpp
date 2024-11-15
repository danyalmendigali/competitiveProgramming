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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll N = 1e2;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;


void solve()
{
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 
	
	int f = -1, s = -1;
	for(int i = 1; i < n; i++){
		if(a[i] != a[0]){
			f = 0;
			s = i;
			break;
		}
	}
	
	if(f == -1){
		cout << "NO" << endl;	
		return;
	}
	
	cout << "YES" << endl;
	vector<pair<int, int>> pr;
	
	for(int i = 1; i < n; i++){
		if(a[i] != a[f]){
			pr.push_back({f + 1, i + 1});
		}
		else{
			pr.push_back({s + 1, i + 1});
		}
	}
	
	for(auto i : pr){
		cout << i.F << " " << i.S << endl; 
	}
}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
