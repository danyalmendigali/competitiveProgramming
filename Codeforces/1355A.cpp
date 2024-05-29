#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll unsigned long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve()
{
       ll a, k; cin >> a >> k;
       for(int i = 0; i < k - 1; i++){
              ll mn = 1e18;
              ll mx = 0;
              ll r = a;
              while(a > 0){
                     ll t = a % 10;
                     mn = min(mn, t);
                     mx = max(mx, t);
                     a /= 10;
              }
              a = r + mx * mn;
              if(mn == 0){
                     break;
              }
       }
       cout << a << endl;

}

signed main()
{
    ios;
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}
