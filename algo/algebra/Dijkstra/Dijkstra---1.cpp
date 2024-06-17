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


const ll N = 1e6 + 5;
const ll INF = 1e18;

vector<ll> ans;
vector<pair<ll, ll>> g[N];
ll d[N], p[N];
set<pair<ll, ll>> st;

void solve()
{
       int n, m; cin >> n >> m;
       for(int i = 1; i <= m; i++){
              int a, b, c;
              cin >> a >> b >> c;
              g[a].push_back({b, c});
              g[b].push_back({a, c});
       }
       for(int i = 1; i <= n; i++) d[i] = INF;
       d[1] = 0;
       p[1] = 0;
       st.insert({0, 1});
       while(st.sz){
              pair<int, int> v = *st.begin();
              st.erase(v);
              for(pair<int, int> to : g[v.S]){
                     if(d[to.F] > d[v.F] + to.S){
                            p[to.F] = v.S;
                            st.erase({d[to.F], to.F});
                            d[to.F] = d[v.S] + to.S;
                            st.insert({d[to.F], to.F});
                     }
              }
       }

       if(d[n] == INF){
              cout << -1 << endl;
              return;
       }
       while(n > 0){
              ans.pb(n);
              n = p[n];
       }
       reverse(all(ans));
       for(int i = 0; i < ans.sz; i++){
              cout << ans[i] << " ";
       }
       cout << endl;

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
