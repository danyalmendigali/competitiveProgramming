#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
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
       int n, m, k; cin >> n >> m >> k;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<ll> res = a;

       vector<pair<pair<ll, ll>, ll>> p(m);
       vector<pair<ll, ll>> p2(k);
       /*
       cout << endl << endl;


       for(auto i : mp){
              cout << i.F << " " << i.S << endl;
       }
       */
       vector<ll> cnt(m, 0), cnt2(n + 1, 0);

       for(int i = 0; i < m; i++){
              cin >> p[i].F.F >> p[i].F.S >> p[i].S;
       }
       for(int i = 0; i < k; i++){
              cin >> p2[i].F >> p2[i].S;
              cnt[p2[i].F - 1]++;
              if(p2[i].S < m){
                     cnt[p2[i].S]--;
              }
       }

       for(int i = 1; i < m; i++){
              cnt[i] += cnt[i - 1];
       }


       for(int i = 0; i < m; i++){
              p[i].S *= cnt[i];
              cnt2[p[i].F.F - 1] += p[i].S;
              cnt2[p[i].F.S] -= p[i].S;
       }



       ll res2 = 0;
       for(int i = 0; i < n; i++){
              res2 += cnt2[i];
              a[i] += res2;
              cout << a[i] << " ";
       }
       cout << endl;


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
