#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{
       ll x; cin >> x;

       bool ok = false;

       for(ll i = 1; i * i * i < x; i++){
              ll res = x - (i * i * i);
              ll res2 = round(cbrt(res));
              if(res2 > 0 && res2 * res2 * res2 == res){
                     ok = true;
                     break;
              }
       }

       if(ok){
              cout << "YES" << endl;
       }
       else{
              cout << "NO" << endl;
       }


}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
