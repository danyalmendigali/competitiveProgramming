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
       ll n, k; cin >> n >> k;
       vector<ll> a(n), t(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> t[i];
       }

       vector<ll> pref(n + 1, 0);
       vector<ll> pref2(n + 1, 0);
       for(int i = 1; i <= n; i++){
              pref2[i] = pref2[i - 1] + a[i - 1];
       }

       for(int i = 1; i <= n; i++){
              pref[i] = pref[i - 1];
              if(t[i - 1] == 1){
                     pref[i] += a[i - 1];
              }
       }

       ll mx = 0;
       for(int i = 0; i <= n - k; i++){
              ll res = pref[i + k] - pref[i];
              ll res2 = pref2[i + k] - pref2[i];
              cout << res << " " << res2 << endl;
              mx = max(mx, res2 - res);
       }

       cout << mx + pref[n] << endl;

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
