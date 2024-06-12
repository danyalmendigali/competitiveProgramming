#include <iostream>
#include <vector>
#include <string>
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

void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       reverse(all(a));
       ll sum = 0;
       ll mx = 1e10;
       for(int i = 0; i < a.sz; i++){
              mx = min(mx - 1, a[i]);
              mx = max(mx, (ll)0);
              sum += mx;
       }
       cout << sum * 1ll << endl;


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
