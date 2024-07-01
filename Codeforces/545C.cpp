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
       vector<pair<int, int>> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
       }

       if(n == 1){
              cout << 1 << endl;
              return;
       }
       int cnt = 2;
       for(int i = 1; i < n - 1; i++){
              if(a[i].F - a[i].S > a[i - 1].F){
                     cnt++;
              }
              else if(a[i].F + a[i].S < a[i + 1].F){
                     cnt++;
                     a[i].F += a[i].S;
              }
       }

       cout << cnt << endl;


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
