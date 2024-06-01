#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
       int n, m; cin >> n >> m;
       vector<ll> a(n);
       ll sum = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              sum += a[i];
       }
       for(int i = 0; i < m; i++){
              int t, a2, b2; cin >> t;
              if(t == 2){
                     cin >> a2;
                     fill(a.begin(), a.end(), a2);
                     sum = a2 * a.sz;
                     cout << sum << endl;

              }
              if(t == 1){
                     cin >> a2 >> b2;
                     sum = sum - (a[a2 - 1]) + b2;
                     cout << sum << endl;
                     a[a2 - 1] = b2;

              }
       }



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;

       //cin >> t;
       while(t--) solve();



       return 0;
}
