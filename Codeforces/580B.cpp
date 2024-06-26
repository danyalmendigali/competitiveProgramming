#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
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
       ll n, d; cin >> n >> d;
       vector<pair<ll, ll>> pr(n);
       for(int i = 0; i < n; i++){
              cin >> pr[i].F >> pr[i].S;
       }
       sort(all(pr));
       vector<ll> maxn;
       ll mx = 0;
       ll cnt = 0, sum = 0, sum2 = 0;

       for(int r = 0, l = 0; r < n; r++){
              sum2 += pr[r].S;
              while(pr[r].F - pr[l].F >= d){
                     sum2 -= pr[l].S;
                     l++;
              }

              mx = max(mx, sum2);

       }

       cout << mx << endl;

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
