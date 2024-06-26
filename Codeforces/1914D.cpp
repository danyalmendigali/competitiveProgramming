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
       vector<pair<int, int>> a(n), b(n), c(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F;
              a[i].S = i;
       }
       for(int i = 0; i < n; i++){
              cin >> b[i].F;
              b[i].S = i;
       }
       for(int i = 0; i < n; i++){
              cin >> c[i].F;
              c[i].S = i;
       }

       sort(all(a));
       sort(all(b));
       sort(all(c));
       reverse(all(a));
       reverse(all(b));
       reverse(all(c));
       int mx = 0;

       for(int i = 0; i < 3; i++){
              for(int j = 0; j < 3; j++){
                     for(int k = 0; k < 3; k++){
                            if(a[i].S != b[j].S && b[j].S != c[k].S && a[i].S != c[k].S){
                                 mx = max(mx, a[i].F + b[j].F + c[k].F);
                            }
                     }
              }
       }

       cout << mx << endl;
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
