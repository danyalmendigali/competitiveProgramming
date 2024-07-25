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
       int n, m; cin >> n >> m;
       ll ans = 2 * m;
       vector<int> a(m);
       map<int, int> mp;
       for(int i = 0; i < m; i++){
              cin >> a[i];
              mp[a[i]]++;
       }
       int l = 1, r = m * 2;
       while(l <= r){
              int md = l + r >> 1;
              ll h = 0, le = 0;
              for(int i = 1; i <= n; i++){
                     if(md < mp[i]){
                          le += mp[i] - md;
                     }
                     else{
                          h += (md - mp[i]) / 2;
                     }
              }
              if(h >= le){
                     ans = md;
                     r = md - 1;
              }
              else{
                     l = md + 1;
              }
       }

       cout << ans << endl;



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
