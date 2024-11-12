#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define ll long long
#define pb(a) push_back(a)
#define F first
#define S second
#define ers(a) erase(a)
#define ins(a) insert(a)
#define sz size()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const ll N = 1e3 + 9;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;

int n, m, v1, v2;
bool used[N];
vector<ll> g[N];

void dfs(int u, int p){
	used[u] = true;
	for(auto to : g[u]){
		if(!used[to]){
			dfs(to, u);
		}
		else if(to != p){
			cout << "YES" << endl;
			exit(0);
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
	
	dfs(1, 0);
	cout << "NO" << endl;
	
	
}

signed main() {
    Fast_Code;
    int t = 1;
    while (t--) solve();
    return 0;
}
