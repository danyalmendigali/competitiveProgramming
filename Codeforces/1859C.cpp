#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define ins() insert()
#define ers(a) erase();
#define fori(i, n) for(int i = 0; i < n; i++)
#define inf 1e18

void solve()
{
       int n; cin >> n;
       vector<ll> a(n);
       iota(a.begin(), a.end(), 1);
       int res = 0;
       for(int i = 0; i < a.sz; i++){ // i = 0
              int cur = 1;
              for(int j = 0; j < i;   j++){
                     a[j] = cur;
                     cout << a[j] << " " << cur << endl;
                     cur++;
              }
              cur = n;
              for(int j = i; j < n; j++){
                     a[j] = cur;
                     cout << a[j] << " " << cur << endl;
                     cur--;
              }
              int tmp = 0;
              for(int i = 0; i < n; i++){
                     tmp += (i + 1) * a[i];
              }
              int mx = 0;
              for(int i = 0; i < n; i++) mx = max(mx, (i + 1) * a[i]);
              tmp -= mx;
              if(tmp > res){
                     res = tmp;
              }
       }
       cout << res << endl;
       /*
       for(int i = 0; i < a.sz; i++){
              cout << a[i] << " ";
       }
       cout << endl;
       */

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
