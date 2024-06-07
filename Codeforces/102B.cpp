#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
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

void solve()
{
       string s; cin >> s;
       ll res = 0;
       if(s.sz == 1){
              cout << "0" << endl;
              return;
       }
       for(ll i = 0; i < s.sz; i++){
              res += (s[i] - '0');
       }
       ll ans = 1;
       while(res > 9){
              string g = to_string(res);
              res = 0;
              for(int j = 0; j < g.sz; j++){
                     res += (g[j] - '0');
              }
              ans++;

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
