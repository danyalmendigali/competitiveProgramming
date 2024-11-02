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
       int n, k; cin >> n >> k;
       vector<pair<int, int>> a(k);
       map<int, int> mp;
       for(int i = 0; i < k; i++){
              cin >> a[i].F >> a[i].S;
              mp[a[i].F] += a[i].S;
       }
       int cnt = 0;
       for(auto i : mp){
              cnt++;
       }

       vector<int> res;
       int ind = 0;

       for(auto i : mp){

              res.pb(i.S);
       }

       sort(all(res));
       reverse(all(res));

       ll ans = 0;

       int res_sz = res.sz;

       if(res.sz <= n){
              for(int i = 0; i < res.sz; i++){
                     ans += res[i];
              }

              cout << ans << endl;
              return;
       }
       else{
              for(int i = 0; i < n; i++){
                     ans += res[i];
              }

              cout << ans << endl;
              return;
       }







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
