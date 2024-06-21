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



void solve()
{
       string s; cin >> s;
       int res = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '1'){
                     res++;
              }
       }


       int zero = 0, ans = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '1'){
                     res--;
              }
              if(res == 0 && zero == 0){
                     ans++;
              }
              if(s[i] == '0'){
                     zero++;
              }
       }

       cout << ans << endl;



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
