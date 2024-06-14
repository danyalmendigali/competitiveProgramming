#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve(){
       ll n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<ll> pref(n);
       pref[0] = a[0];
       for(int i = 1; i < n; i++){
              pref[i] = pref[i - 1] + a[i];
       }

       if(pref[n - 1] % 3 != 0){
              cout << 0 << endl;
              return;
       }


       ll sum_part = pref[n - 1] / 3;
       ll w = 0;
       ll cnt = 0;

       for(int i = 0; i < n - 1; i++){
              if(pref[i] == 2 * sum_part && i >= 1){
                     w += cnt;
              }
              if(pref[i] == sum_part){
                     cnt++;
              }
       }

       cout << w << endl;
}



signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
