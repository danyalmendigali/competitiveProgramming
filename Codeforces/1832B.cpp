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
       int n, k; cin >> n >> k;
       ll sum = 0;
       vector<ll> a(n);
       for(int i = 1; i <= n; i++){
              cin >> a[i];
              sum += a[i];
       }
       sort(all(a));


       for(int i = 1; i <= n; i++){
              a[i] += a[i - 1];
       }

       ll res = 0;
       for(int i = 0; i <= k; i++){
              res = max(res, a[n - (k - i)] - a[2 * i]);
       }

       cout << res << endl;



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
