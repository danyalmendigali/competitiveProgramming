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


void solve()
{
       ll n, q; cin >> n >> q;
       vector<ll> a(n), b(q);
       vector<ll> pref(n);
       vector<ll> mx_vec;
       ll mx = -1;
       for(ll i = 0; i < n; i++){
              cin >> a[i];
              mx = max(mx, a[i]);
              mx_vec.pb(mx);
       }


       pref[0] = a[0];
       for(ll i = 1; i < n; i++){
              pref[i] = pref[i - 1] + a[i];
       }
       pref.insert(pref.begin(), 0);
       pref.pb(INF);


       for(int i = 0; i < q; i++){
              ll g;
              cin >> g;
              ll ind = 0, l = 0, r = mx_vec.sz - 1;
              while(l <= r){
                     ll md = l + r >> 1;
                     if(mx_vec[md] <= g){
                            l = md + 1;
                     }
                     else{
                            r = md - 1;
                     }
              }

              if(l == 0){
                     cout << pref[0] << " ";
              }
              else if(l == mx_vec.sz){
                     cout << pref[pref.sz - 2] << " ";;
              }
              else{
                     cout << pref[l] << " ";
              }

       }
       cout << endl;

}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
