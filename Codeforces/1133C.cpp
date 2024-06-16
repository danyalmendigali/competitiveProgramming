#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       sort(all(a));
       int mx = -1, mn = 1e9 + 1;
       int res = 0;
       int d = 0;
       for(int r = 0, l = 0; r < a.sz; r++){
              mx = max(mx, a[r]);
              mn = min(mn, a[r]);
              res++;

              while(mx - mn > 5){
                     if(mn == a[l]){
                            mn = a[l + 1];
                     }
                     l++;
                     res--;
              }
              d = max(d, res);
       }

       cout << d << endl;



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
