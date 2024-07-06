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
       int n, m; cin >> n >> m;
       vector<int> res;
       res.pb(0);
       int l = 0;
       int sum = 0;
       for(int i = 0; i < n; i++){
              int a, b; cin >> a >> b;
              res.pb(sum + (a * b));
              sum += (a * b);
       }
       vector<int> ans;
       vector<int> a(m);

       for(int i = 0; i < m; i++){
              cin >> a[i];
              int ind = -1;
              int l = 0, r = res.sz - 1;
              while(l <= r){
                     int md = l + r >> 1;
                     if(res[md] < a[i] && res[md + 1] >= a[i]) {
                            ind = md;
                            break;
                     }
                     if(a[i] > res[md]) l = md + 1;
                     else r = md - 1;


              }

              ans.pb(ind + 1);
       }
       for(int i = 0; i < ans.sz; i++){
              cout << ans[i] << endl;
       }



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
