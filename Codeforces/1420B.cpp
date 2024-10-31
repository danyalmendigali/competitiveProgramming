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

const int N = 1e9 + 9;

void solve()
{
       ll n; cin >> n;
       map<ll, ll> mp;
       ll ans = 0;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
              ll cnt = 31 - __builtin_clz(a[i]);
              ans += mp[cnt];
              mp[cnt]++;
       }

       if(n == 1){
              cout << 0 << endl;
              return;
       }
       else{
              cout << ans << endl;
              return;
       }




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
