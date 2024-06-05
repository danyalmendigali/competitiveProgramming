#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define sz size()
#define pb(a) push_back(a)

void solve()
{
       int a1, a2; cin >> a1 >> a2;
       int res = 1;
       if(a1 <= 1 && a2 <= 1){
              res = 0;
       }
       while(true){
              if(min(a1, a2) == a1){
                     a1 += 1;
                     a2 -= 2;
              }
              else{
                     a1 -= 2;
                     a2++;
              }

              if(a1 <= 0 || a2 <= 0){
                     break;
              }
              res++;
       }
       cout << res << endl;
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
