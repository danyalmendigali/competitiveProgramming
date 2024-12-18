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
bool used[N];
vector<int> col(N, inf);

int n , a; 

void dfs(int u, int c){
	col[u] = c; 
	for(auto v : g[u]){
		if(!col[v] != c) dfs(v, c);
	}
}

void solve()
{
	cin >> n; 
	int cnt = 0;

	vector<int> color(n);
	for(int i = 0; i < n - 1; i++){
		cin >> a;
		g[a - 1].pb(i + 1);
	}
	/*
	for(int i = 0; i < n; i++){
		cout << i<< ": ";
		for(auto j : g[i]){
			cout << j<< " ";
		}
		cout << endl;
	}
	*/
	
	for(int i = 0; i < n; i++){
		cin >> color[i];
		if(col[i] != color[i]){
			dfs(i, color[i]);
			cnt++;
		}
	}
	
	cout << cnt << endl;
	 

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
