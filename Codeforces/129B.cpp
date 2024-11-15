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

vector<ll> g[N];
bool used[N];
bool was[N];


void solve()
{
	int n, m; cin >> n >> m;
	int v1, v2; 
	for(int i = 0; i < m; i++){
		cin >> v1 >> v2;
		v1--; v2--;
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	int cnt = 0;
	while(true){
		vector<int> res;
		
		for(int i = 0; i < n; i++){
			if(g[i].sz == 1) res.pb(i);
		}
	
		if(res.sz == 0) break;
		
		for(auto v : res){
			int f = g[v][0];
			g[v].clear();
			g[f].erase(remove(all(g[f]), v), g[f].end());;
		}
		cnt++;
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
