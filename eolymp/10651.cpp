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

vector<ll> g[N];
vector<ll> t;
bool used[N];

int n, m, v1, v2;

void dfs(int v){
	used[v] = true;
	for(auto u : g[v]){
		if(!used[u]) dfs(u);
	}
	t.pb(v);
}

void topological_sort(){
	for(int v = 0; v < n; v++){
		if(!used[v]) dfs(v);
	}
	reverse(all(t));
}


void solve()
{
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> v1 >> v2;
		v1--; v2--;
		g[v1].pb(v2);
	}
	
	for(auto v : t){
		cout << v + 1 << " ";
	}
	
	
	
	
	
	 

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
