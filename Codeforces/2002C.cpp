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
const ll INF = 1e18;

void solve()
{
       ll n; cin >> n;
       vector<pair<ll, ll>> p(n);
       for(int i = 0; i < n; i++){
              cin >> p[i].F >> p[i].S;
       }
       ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
       ll dist = sqrt(((x2 - x1) * (x2 - x1)) + (y2 - y1) * (y2 - y1));
       bool ok = false;
       for(int i = 0; i < p.sz; i++){
              ll dx = p[i].F - x2;
              ll dy = p[i].S - y2;
              if(dist >= dx * dx + dy * dy){
                     cout << "YES" << endl;
                     return;
              }
       }

       cout << "NO" << endl;





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
