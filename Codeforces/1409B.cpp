#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <iomanip>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

using namespace std;

void solve()
{
       ll a, b, x, y, n;
       ll res1, res2;
       cin >> a >> b >> x >> y >> n;
       if((a - x) + (b - y) <= n){
              cout << x * y << endl;
              return;
       }
       else{
              ll g = min(n, a - x);
              ll g1 = n - g;
              ll g2 = min(g1, b - y);
              res1 = (a - g) * (b - g2);

              ll g3 = min(n, b - y);
              ll g4 = n - g3;
              ll g5 = min(g4, a - x);
              res2 = (a - g5) * (b - g3);
       }

       cout << min(res1, res2) << endl;




}

signed main()
{
       int t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
