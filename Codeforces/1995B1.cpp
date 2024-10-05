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
       ll n, m; cin >> n >> m;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));


       ll mx = 0, sum = 0;
       int l = 0;

       if(a[0] > m){
              cout << 0 << endl;
              return;
       }

       for(int r = 0; r < n; r++){
             sum += a[r];
             while(a[r] - a[l] > 1 || sum > m){
                     sum -= a[l];
                     l++;
             }
             mx = max(mx, sum);
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
