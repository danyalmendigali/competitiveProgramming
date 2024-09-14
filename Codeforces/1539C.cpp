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
       ll n, k, x; cin >> n >> k >> x;
       vector<ll> a(n);
       for(ll i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       vector<ll> dif;
       for(ll i = 0; i < n - 1; i++){
              if(a[i + 1] - a[i] > x){
                     dif.pb(a[i + 1] - a[i]);
              }
       }

       sort(all(dif));
       ll res = dif.sz + 1;

       for(ll i = 0; i < dif.sz && k > 0; i++){
              ll n = (dif[i] - 1) / x;
              if(k >= n){
                     k -= n;
                     res--;
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
