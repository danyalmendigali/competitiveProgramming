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

ll cnt_pairs(ll n, ll l, ll r, vector<ll>& a)
{
       sort(all(a));
       ll cnt = 0;
       for(int i = 0; i < a.sz; i++){
              ll left = l - a[i];
              ll right = r - a[i];

              auto left_bn = lower_bound(a.begin() + i + 1, a.end(), left);
              auto right_rb = upper_bound(a.begin() + i + 1, a.end(), right);

              cnt += distance(left_bn, right_rb);
       }


       return cnt;
}


void solve(){
       ll n, l, r;
       cin >> n >> l >> r;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       cout << l - a[0] << endl;
       cout << r - a[0] << endl;
       cout << cnt_pairs(n, l, r, a) << endl;
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
