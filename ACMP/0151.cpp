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
ll color[N];
ll a , b , n , m;

void dfs(int v, int col){
       color[v] = col;
       for(int u : g[v]){
              if(!color[u]){
                     dfs(u, -col);
              }
              else if(color[u] != -col){
                     cout << "NO" << endl;
                     exit(0);
              }
       }
}


void solve()
{
       cin >> n >> m;

       for(int i = 0; i < m; i++){
              cin >> a >> b;
              a--; b--;
              g[a].pb(b);
              g[b].pb(a);
       }

       for(int v = 0; v < n; v++){
              if(!color[v]){
                     dfs(v, 1);
              }
       }

       cout << "YES" << endl;


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
