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


const ll N = 2e5 + 7;
vector<ll> g[N];
vector<bool> used(N, false);


bool ok;

void dfs(ll u){
       used[u] = true;
       if(g[u].sz != 2){
              ok = false;
       }

       for(auto i : g[u]){
              if(!used[i]){
                     dfs(i);
              }
       }
}

void solve()
{
       ll n, m; cin >> n >> m;
       ll v, v1;
       for(int i = 0; i < m; i++){
              cin >> v >> v1;
              g[v].pb(v1);
              g[v1].pb(v);
       }


       ll cnt = 0;
       for(int i = 0; i < n; i++){
              if(!used[i]){
                     ok = true;
                     dfs(i);
                     if(ok){
                            cnt++;
                     }
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
