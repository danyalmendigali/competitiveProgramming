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


bool ok(ll n, ll k, ll a)
{
       ll tot = 0, curr = a;
       while(curr > 0){
              tot += curr;
              curr /= k;
              if(tot >= n) return true;
       }
       return false;
}

void solve()
{
       int n, k; cin >> n >> k;
       ll l = 1, r = n;
       ll res = 0;
       while(l <= r){
              ll md = l + r >> 1;
              if(ok(n, k, md)){
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
       cin >> t;
       while(t--) solve();


       return 0;
}
