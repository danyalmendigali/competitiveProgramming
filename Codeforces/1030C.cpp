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
       int n; cin >> n;
       string s; cin >> s;
       int l = 0, sum = 0;
       int g = 0;

       int tot = 0;
       for(int i = 0; i < s.sz; i++){
              tot += (s[i] - '0');
       }
       if(tot == 0){
              cout << "YES" << endl;
              return;
       }

       for(int i = 1; i < 9 * s.sz; i++){
              int res = 0, sum2 = 0;
              for(int j = 0; j < s.sz; j++){
                     sum2 += (s[j] - '0');
                     if(i == sum2){
                            res++;
                            sum2 = 0;
                     }
              }

              if(sum2 == 0 && res > 1){
                     cout << "YES" << endl;
                     return;
              }
       }

       cout << "NO" << endl;


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
