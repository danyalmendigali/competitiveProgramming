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
       int n; cin >> n;
       vector<pair<int, int>> pr(n);
       for(int i = 0; i < n; i++){
              cin >> pr[i].F;
       }
       for(int i = 0; i < n; i++){
              cin >> pr[i].S;
       }

       vector<int> res;
       for(int i = 0; i < n; i++){
              res.pb(pr[i].S - pr[i].F);
       }
       sort(all(res));

       int ans = 0, l = 0, r = n - 1;

       while(l < r){
              if(res[l] + res[r] >= 0){
                     ans++;
                     r--;
                     l++;
              }
              else{
                     l++;
              }
       }

       cout << ans << endl;



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
