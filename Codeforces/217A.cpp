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


ll n , v1 , v2;


void dfs(int v){
       used[v] = true;
       for(int u : g[v]){
              if(!used[u]) dfs(u);
       }
}

void solve()
{
       cin >> n;
       vector<pair<int, int>> pr(n);
       for(int i = 0; i < n; i++){
              cin >> pr[i].F >> pr[i].S;
       }

       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     if(i != j && pr[i].F == pr[j].F || pr[i].S == pr[j].S){
                            g[i].pb(j);
                            g[j].pb(i);
                     }
              }
       }

       int cnt = 0;
       for(int i = 0; i < n; i++){
              if(!used[i]){
                     dfs(i);
                     cnt++;
              }
       }

       cout << cnt - 1 << endl;



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
