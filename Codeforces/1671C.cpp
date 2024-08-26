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


const ll N = 1e6 + 5;
const ll INF = 1e9;

int bin_ser(vector<int> a, int x)
{
       int l = 0, r = a.sz - 1;
       int num = -1;
       while(l <= r){
              int md = l + r >> 1;
              if(x == a[md]) return md;
              if(x > a[md]){
                     l = md + 1;
                     num = md;
              }
              if(x < a[md]) r = md - 1;
       }


       return num;
}


void solve()
{

       int n, x; cin >> n >> x;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       vector<ll> pref(n + 1);
       pref[0] = 0;
       for(int i = 1; i <= n; i++){
              pref[i] = a[i - 1] + pref[i - 1];
       }
       pref.erase(pref.begin());

       ll res = 0, d = 0;
       for(int i = pref.sz - 1; i >= 0; i--){
              pref[i] += (i + 1) * d;
              if((x - pref[i]) >= 0){
                     int t = ((x - pref[i]) / (i + 1)) + 1;
                     res += (t * (i + 1));
                     d += t;
              }
       }

       cout << res << endl;



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
