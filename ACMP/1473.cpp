#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const ll N = 1e3 + 1;
vector<ll> g[N];
bool used[N];
bool was[N];
vector<int> path;

int n, m, v1, v2, k;

void dfs(int u){
	used[u] = true;
	path.pb(u);
	for(auto v : g[u]){
		if(!used[v] && !was[v]){
			dfs(v);
		}
	}
}

void solve() {
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> v1 >> v2;
		v1--; v2--;
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	cin >> k;
	vector<int> city(k);
	queue<int> q;
	for(int i = 0; i < k; i++){
		cin >> city[i];
		city[i]--;
		was[city[i]] = true;
		q.push(city[i]);
	}
	
    while(q.sz){
    	int cur = q.front();
    	q.pop();
    	path.clear();
    	
    	dfs(cur);
    	cout << path.sz << endl;
    	for(int i = 0; i < path.sz; i++){
    		cout << path[i] + 1 << " ";
    	}
    	cout << endl;
    }
}

signed main() {
    Fast_Code;
    int t = 1;
    while (t--) solve();
    return 0;
}
