#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define sz size()
#define pb(a) push_back(a)

void solve()
{
       int n; cin >> n;
       vector<ll> a(n);
       map<ll, ll> mp;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]] = i + 1;
       }
       ll m, l; cin >> m;
       ll res1 = 0, res2 = 0;
       for(int i = 0; i < m; i++){
              cin >> l;
              ll h = mp[l];
              res1 += (h);
              res2 += (n - h + 1);
       }
       cout << res1 << " " << res2 << endl;


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
