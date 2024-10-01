#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       ll n, q; cin >> n >> q;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       map<ll, ll> mp;
       for(int i = 0; i < n; i++){
              ll res = (n - i) * (i + 1) - 1;
              mp[res]++;
              if(i > 0){
                     ll res2 = (n - i) * i;
                     mp[res2] += (a[i] - a[i - 1] - 1);
              }
       }

       while(q--){
              ll k; cin >> k;
              if(mp.find(k) == mp.end()){
                     cout << 0 << " ";
              }
              else{
                     cout << mp[k] << " ";
              }
       }
       cout << endl;




}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
