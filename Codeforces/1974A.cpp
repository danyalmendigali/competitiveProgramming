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

void solve()
{
       int x, y; cin >> x >> y;
       int b = y / 2;
       if(y % 2 != 0){
              b++;
       }
       int res = (b * 15) - (y * 4);
       if(res >= x){
              cout << b << endl;
              return;
       }
       else{
              int res2 = abs(res - x);
              int h = res2 / 15;
              if(res2 % 15 != 0){
                     h++;
              }
              cout << b + h << endl;
              return;
       }

}

signed main()
{
       cin.tie(0);
       cout.tie(0);
       ios::sync_with_stdio(false);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
