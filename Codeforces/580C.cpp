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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie()

const int MAXN = 1e5 + 5;

int n, m;
bool was[MAXN];
vector<int> adj[MAXN];
vector<pair<int, int>> graph;
int res = 0;


void dfs(int v, int parent, int cnt)
{
       if(was[v]) cnt++;
       else cnt = 0;

       if(cnt > m) return;


       bool ok = true;
       for(int u : adj[v]){
              if(u != parent){
                     ok = false;
                     dfs(u, v, cnt);
              }
       }

       if(ok){
              res++;
       }
}

void solve()
{
       cin >> n >> m;
       for(int i = 0; i < n; i++){
              cin >> was[i];
       }
       for(int i = 1; i < n; i++){
              int x, y; cin >> x >> y;
              x--; y--;
              adj[x].pb(y);
              adj[y].pb(x);
       }

       dfs(0, -1, 0);

       cout << res << endl;



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
