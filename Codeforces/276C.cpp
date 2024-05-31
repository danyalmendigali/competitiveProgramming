#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <map>
#include <unordered_set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)

void solve()
{
       ll n, q; cin >> n >> q;
       vector<ll> a(n);
       vector<ll> pref(n, 0);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < q; i++){
              ll l, r;
              cin >> l >> r;
              l--;
              r--;
              pref[l]++;
              if(r + 1 < n) pref[r + 1]--;
       }
       for(int i = 1; i < n; i++){
              pref[i] += pref[i - 1];
       }

       sort(all(a));
       sort(all(pref));
       ll res = 0;
       for(int i = 0; i < a.sz; i++){
              res += (a[i] * pref[i]);
       }
       cout << res << endl;

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
