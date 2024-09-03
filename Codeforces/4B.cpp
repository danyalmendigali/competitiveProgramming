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
       int d, sm; cin >> d >> sm;
       int res = 0, res2 = 0;
       vector<pair<int, int>> p(d);
       for(int i = 0; i < d; i++){
              cin >> p[i].F >> p[i].S;
              res += p[i].F;
              res2 += p[i].S;
       }

       if(res > sm || res2 < sm){
              cout << "NO" << endl;
              return;
       }

       vector<int> ans(d);
       int sum = res;

       for (int i = 0; i < d; i++) {
           ans[i] = p[i].F;
       }

       for (int i = 0; i < d; i++) {
           int mx = p[i].S - p[i].F;
           if(sum + mx <= sm){
               ans[i] += mx;
               sum += mx;
           }
           else{
               ans[i] += sm - sum;
               sum = sm;
               break;
           }
       }

       cout << "YES" << endl;
       for (int i = 0; i < d; i++) {
           cout << ans[i] << " ";
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
