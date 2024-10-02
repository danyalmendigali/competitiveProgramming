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
       ll sum = 0;
       vector<ll> a(n);
       vector<ll> res(a.sz + 1);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       sort(all(a));
       ll mx = 0;
       for(int i = 0; i < n; i++){
              sum += a[i];
              res[i + 1] = res[i] + a[i];
       }

       for(int i = 0; i <= k; i++){
              mx = max(mx, res[n - i] - res[2 * (k - i)]);
       }

       cout << mx << endl;


}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
