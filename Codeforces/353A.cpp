#include <iostream>
#include <string>
#include <vector>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve()
{
       int n; cin >> n;
       vector<pair<int, int>> p(n);
       int sm1 = 0, sm2 = 0;
       bool ok = false;
       for(int i = 0; i < n; i++){
              cin >> p[i].F >> p[i].S;
              sm1 += p[i].F;
              sm2 += p[i].S;

              if((p[i].F % 2 != p[i].S % 2)){
                     ok = true;
              }
       }

       if(sm1 % 2 == 0 && sm2 % 2 == 0){
              cout << 0 << endl;
              return;
       }
       if(sm1 % 2 != sm2 % 2){
              cout << -1 << endl;
              return;
       }
       if(ok){
              cout << 1 << endl;
              return;
       }
       else{
              cout << -1 << endl;
              return;
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
