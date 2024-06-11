#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <stack>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       int n; cin >> n;
       int mn = 1e9, mx = -1e9;
       vector<pair<pair<int, int>, int>> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i].F.F >> a[i].F.S;
              mn = min(a[i].F.F, mn);
              mx = max(a[i].F.S, mx);
              a[i].S = i + 1;
       }
       sort(all(a));
       for(int i = 0; i < a.sz; i++){
              if(a[i].F.F == mn && a[i].F.S == mx){
                     cout << a[i].S << endl;
                     return;
              }
       }

       cout << -1 << endl;
       return;


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
