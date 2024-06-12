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
       int p, q, l, r;
       cin >> p >> q >> l >> r;
       vector<pair<int, int>> pr1(p);
       vector<pair<int, int>> pr2(q);

       for(int i = 0; i < p; i++){
              cin >> pr1[i].F >> pr1[i].S;
       }

       for(int i = 0; i < q; i++){
              cin >> pr2[i].F >> pr2[i].S;
       }
       int ans = 0;
       for(int t = l; t <= r; t++){
              bool ok = 0;
              for(int i = 0; i < q; i++){
                     int time1 = pr2[i].F + t;
                     int time2 = pr2[i].S + t;
                     for(int j = 0; j < p; j++){
                            int time3 = pr1[j].F;
                            int time4 = pr1[j].S;
                            if (!((time2 < time3) || (time4 < time1))){
                                  ok = 1;
                                  break;
                            }
                     }
                     if(ok == 1) break;

              }
              if(ok == 1) ans++;

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
