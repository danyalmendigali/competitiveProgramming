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


void solve()
{
       ll n, l, a;
       ll res = 0;
       cin >> n >> l >> a;
       vector<pair<ll, ll>> pr(n);
       vector<pair<ll, ll>> g(n);
       for(int i = 0; i < n; i++){
              cin >> pr[i].F >> pr[i].S;
              g[i].F = pr[i].F;
              g[i].S = pr[i].F + pr[i].S;
       }
       if(n == 0){
              cout << l / a << endl;
              return;
       }
       ll h = pr[0].F;
       res += (h / a);

       for(int i = 0; i < g.sz - 1; i++){
              ll e = pr[i].F + pr[i].S;
              ll s = pr[i + 1].F;
              res += (s - e) / a;
       }

       ll h2 = l - g[g.sz - 1].S;
       res += (h2 / a);

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
