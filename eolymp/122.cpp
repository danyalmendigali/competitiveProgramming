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

int n, m, v1, v2, k, a, b, d;
bool used[N];
vector<ll> g[N];
vector<ll> path;
int cnt = 0;

void dfs(int a, int b, int dep){
	if(dep > d) return;
	if(a == b){
		cnt++;
		return;
	}
	
	used[a] = true;
	for(auto v : g[a]){
		if(!used[v]) dfs(v, b, dep + 1);
	}
	
	used[a] = false;
}	


void solve() {
	path.clear();
	cin >> n >> k >> a >> b >> d;
	a--; b--;
	
	for(int i = 0; i < k; i++){
		cin >> v1 >> v2;
		v1--; v2--;
		g[v1].pb(v2);
	}
	
	fill(used, used + N, false);
	cnt = 0;
	dfs(a, b, 0);
	cout << cnt << endl;
	
	
	
	
}

signed main() {
    Fast_Code;
    int t = 1;
    while (t--) solve();
    return 0;
}
