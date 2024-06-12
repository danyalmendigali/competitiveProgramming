#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <climits>
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
       int n, m; cin >> n >> m;
       vector<int> a(n), b(m);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       for(int i = 0; i < m; i++){
              cin >> b[i];
       }

       for(int i = 0; i < m; i++){
              int l = 0, r = a.sz;
              while(l < r){
                     int md = (l + r) / 2;
                     if(a[md] <= b[i]) l = md + 1;
                     else r = md;
              }

              cout << l << " ";
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
