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
       int n; cin >> n;
       vector<vector<int>> a(2, vector<int>(n));
       for(int i = 0; i < 2; i++){
              for(int j = 0; j < n; j++){
                     cin >> a[i][j];
              }
       }

       int l = 0, r = 0;
       for(int i = 1; i < n; i++){
              r += a[0][i];
       }

       int mn = max(l, r);
       for(int i = 0; i < n; i++){
              l += a[1][i];
              if(i < n - 1){
                     r -= a[0][i + 1];
              }
              mn = min(mn, max(l, r));
       }
       cout << mn << endl;


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
