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

const int MAXN = 3 * 1e5;

void solve()
{
       int n, m; cin >> n >> m;
       vector<int> res;
       vector<char> ok(MAXN + 1, true);
       ok[0] = ok[1] = false;
       for(int i = 2; i <= MAXN; i++){
              if(ok[i]){
                     if(i * 1ll * i <= MAXN){
                            for(int j = i * i; j <= MAXN; j += i){
                                   ok[j] = false;
                            }
                     }
              }
       }

       for(int i = 2; i <= MAXN; i++){
              if(ok[i] && i >= n && i <= m){
                     res.pb(i);
              }
       }

       if(res.sz == 0){
              cout << "Absent" << endl;
              return;
       }
       else{
              for(int i = 0; i < res.sz; i++){
                     cout << res[i] << endl;
              }
              return;
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
