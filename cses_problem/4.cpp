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
       ll n; cin >> n;
       vector<ll> a(n);
       for(ll i = 0; i < n; i++){
              cin >> a[i];
       }
       ll ans = 0;
       for(ll i = 1; i < a.sz; i++){
              if(a[i] < a[i - 1]){
                     ans += (a[i - 1] - a[i]);
                     a[i] = a[i - 1];
              }
       }

       cout << ans << endl;



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
