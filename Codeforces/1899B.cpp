#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       vector<ll> pref(n + 1, 0);
       for(int i = 0; i < n; i++){
              cin >> a[i];
              pref[i + 1] = pref[i] + a[i];
       }
       ll mx = -1e18L, mn = 1e18L;
       for(ll i = 1; i <= n; i++){
              vector<ll> res2;
              for(ll j = i; j <= n; j += i){
                     res2.pb(pref[j] - pref[j - i]);
              }
              for(ll j = 0; j < res2.sz; j++){
                     mx = max(mx, res2[j]);
                     mn = min(mn, res2[j]);
              }
       }
       if(mx == -1e18L){
              mx = 0;
       }
       if(mn == 1e18L){
              mn = 0;
       }
       cout << mx - mn << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
