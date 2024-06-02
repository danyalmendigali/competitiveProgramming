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

void solve()
{
       ll n, x; cin >> n >> x;
       ll res = 0;
       vector<ll> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       sort(all(a));
       for(int i = 0; i < a.sz; i++){
              res += (a[i] * x);
              if(x > 1) x--;

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
