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
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;

void solve()
{
       ll x, y; cin >> x >> y;
       ll n; cin >> n;
       // [2 3 1 -2 -3 - 1 2 3 1]

       x = (x % mod + mod) % mod;
       y = (y % mod + mod) % mod;

       if(n % 6 == 1){
              cout << x * 1ll << endl;
              return;
       }
       if(n % 6 == 2){
              cout << y * 1ll << endl;
              return;
       }
       if(n % 6 == 3){
              cout << ((y - x + mod) % mod) * 1ll;
              return;
       }
       if(n % 6 == 4){
              cout << (-x + mod) % mod * 1ll;
              return;
       }
       if(n % 6 == 5){
              cout << (-y + mod) % mod * 1ll;
              return;
       }
       if(n % 6 == 0){
              cout << (x - y + mod) % mod * 1ll;
              return;
       }

       cout << (x - y + mod) % mod * 1ll << endl;






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
