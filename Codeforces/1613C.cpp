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


const ll INF = 1e18;

void solve()
{
       ll n, h;
       cin >> n >> h;
       vector<ll> a(n);
       for(ll i = 0; i < n; i++){
              cin >> a[i];
       }

       ll res = 0, l = 1, r = INF;
       while(l <= r){
              ll md = l + r >> 1;
              ll ans = 0;
              for(ll i = 0 ; i < n; i++){
                     if(i == n - 1){
                            ans += md;
                     }
                     else{
                            ans += min(a[i + 1] - a[i], md);
                     }
              }
              if(ans >= h){
                     res = md;
                     r = md - 1;
              }
              else{
                     l = md + 1;
              }

       }
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
