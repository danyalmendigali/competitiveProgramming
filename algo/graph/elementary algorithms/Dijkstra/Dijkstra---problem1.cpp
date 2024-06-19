#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

//Finding the shortest paths to all vertices from s

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll MAXN = 1e6 + 6;
const ll INF = 1e18;

vector<pair<int, int>> g[MAXN];
ll d[MAXN];
vector<int> ans;
set<pair<int, int>> st;

void solve()
{
       int n, m, s; cin >> n >> m >> s;
       for(int i = 0; i < m; i++){
              int a, b, c;
              cin >> a >> b >> c;
              g[a].push_back({b, c});
              g[b].push_back({a, c});
       }

       for(int i = 1; i <= n; i++) d[i] = INF;
       d[s] = 0;
       st.insert({0, s});
       while(st.sz){
              pair<int, int> v = *st.begin();
              st.erase(v);
              for(pair<int, int> to : g[v.S]){
                     if(d[to.F] > d[v.S] + to.S){
                            st.erase({d[to.F], to.F});
                            d[to.F] = d[v.S] + to.S;
                            st.insert({d[to.F], to.F});
                     }
              }
       }
       for(int i = 1; i <= n; i++){
              if(d[i] == INF){
                     cout << -1 << endl;
                     return;
              }
              else{
                     cout << d[i] << " ";
              }
       }





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
