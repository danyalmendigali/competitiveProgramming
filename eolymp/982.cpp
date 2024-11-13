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

const ll N = 1e4 + 9;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;

vector<ll> g[N];
bool used[N];
ll c[N];	 
vector<ll> component;
ll a , b , n , m;

void dfs(int v, int num){
       c[v] = num;
       component.pb(v);
       for(int u : g[v]){
              if(!c[u]){
                     dfs(u, num);
              }
       }
}


void solve()
{
       cin >> n >> m;
       for(int i = 0; i < m; i++){
              cin >> a >> b;
              g[a].pb(b);
              g[b].pb(a);
       }


       int cnt = 0;
       for(int i = 1; i <= n; i++){
              if(!c[i]){
              		 component.clear();
                     dfs(i, ++cnt);
                     if(component.sz == n){
                     	cout << "YES" << endl;
                     	return;
                     }
              }
       }
       
       cout << "NO" << endl;


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
