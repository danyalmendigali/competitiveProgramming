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

const ll N = 1e3 + 9;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;

vector<ll> g[N];
int d[N];

void solve()
{
	int n, k; cin >> n >> k;
	int cnt = 0;

	
	int d = 1 << k;
	for(int i = 0; i < d; i++){
		int ans = n;
		for(int j = 0; j < k; j++){
			if(i & (1 << j)){
				ans++;
			}
			else{
				ans--;
			}
		}
		
		if(ans == 0){
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	
	

}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}